/*
** EPITECH PROJECT, 2022
** handle_event.c
** File description:
** handle_event
*/

#include "../include/rpg.h"

void window_event(game_t *game, sfEvent *evt)
{
    if (evt->type == sfEvtClosed)
        sfRenderWindow_close(game->info->wd);
    if (evt->key.code == sfKeyEscape) {
        game->info->preb_scn = PLAY;
        game->info->scn_nb = GMENU;
    }
    if (evt->key.code == sfKeyI) {
        game->info->preb_scn = PLAY;
        game->info->scn_nb = INVENTORY;
    }
}

int key_event(game_t *game)
{
    for (int i = 0; i < KEY_COMMANDS; i++) {
        if (sfKeyboard_isKeyPressed(game->command->key[i].code)) {
            sfSound_play(game->info->sounds->steps);
            game->player->frame = 0;
            game->player->blocked = sfTrue;
            game->command->key[i].func(game);
            return (1);
        }
    }
    return (0);
}

int mouse_event(game_t *game)
{
    for (int i = 0; i < MOUSE_COMMANDS; i++) {
        if (sfMouse_isButtonPressed(game->command->mouse[i].code)) {
            sfSound_play(game->info->sounds->sword);
            game->player->frame = 0;
            game->player->blocked = sfTrue;
            game->command->mouse[i].func(game);
            return (1);
        }
    }
    return (0);
}

void player_event(game_t *game)
{
    if (!mouse_event(game))
        key_event(game);
}

void handle_event(game_t *game)
{
    sfEvent evt;

    if (!game->player->blocked) {
        idle(game->player);
        while (sfRenderWindow_pollEvent(game->info->wd, &evt) &&
        !game->player->blocked) {
            window_event(game, &evt);
            player_event(game);
        }
    }
}
