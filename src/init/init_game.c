/*
** EPITECH PROJECT, 2022
** init_game.c
** File description:
** init_game
*/

#include "../../include/rpg.h"

background_t *first_map(sfTexture *texture)
{
    background_t *back = malloc(sizeof(background_t));
    sfVector2f scale;

    back->sprite = sfSprite_create();
    sfSprite_setTexture(back->sprite, texture, sfTrue);
    back->pos = set_pos(0, 0);
    back->map = MAP_A;
    scale.x = 3;
    scale.y = 3;
    sfSprite_setScale(back->sprite, scale);
    return (back);
}

char ***init_maps(void)
{
    char ***map = malloc(sizeof(char **) * (MAPS));

    map[MAP_A] = init_map("conf/maps/A_final.txt");
    map[MAP_B] = init_map("conf/maps/B_final.txt");
    map[MAP_C] = init_map("conf/maps/C_final.txt");
    map[MAP_D] = init_map("conf/maps/D_final.txt");
    map[MAP_E] = init_map("conf/maps/E_final.txt");
    return (map);
}

game_t *init_game(t_window *info, t_butts **buttons)
{
    game_t *game = malloc(sizeof(game_t));

    game->info = info;
    game->buttons = buttons;
    game->texture = init_texture();
    game->maps = init_maps();
    game->map = game->maps[MAP_A];
    game->player = init_player(game->texture[PLAYER]);
    game->enemies = init_enemies(game->maps, game->texture[ENEMY1]);
    game->command = init_commands();
    game->frame_rate = sfClock_create();
    game->background = first_map(game->texture[MAP_A]);
    game->actual_map = MAP_A;
    return (game);
}
