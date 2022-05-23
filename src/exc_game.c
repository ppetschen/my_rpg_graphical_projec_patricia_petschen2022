/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../include/rpg.h"

void set_exc_game(game_t *game)
{
    game->info->preb_scn = game->info->scn_nb;
    game->info->scn_nb = PLAY;
    game->buttons = scn_changes(game->buttons, game->info);
    game->info->scn_checker = game->info->scn_nb;
}

void frame_change(game_t *game)
{
    move_sprites(game);
    check_hit_player(game);
    change_sprites(game);
    display(game);
    sfClock_restart(game->frame_rate);
    enemy_direction(game->player->index,
    game->enemies->enemy[game->actual_map]);
    check_enemy_attack(game->enemies->enemy[game->actual_map],
    game->player->index);
}

int exc_game(game_t *game)
{
    sfTime time;

    set_exc_game(game);
    while (sfRenderWindow_isOpen(game->info->wd) &&
    game->info->scn_nb == PLAY) {
        game->player->att_damage = 15 + (game->info->sword * 3);
        handle_event(game);
        time = sfClock_getElapsedTime(game->frame_rate);
        if (sfTime_asMilliseconds(time) >= 30)
            frame_change(game);
        if (!game->player->blocked)
            detect_change_map(game);
    }
    return (0);
}
