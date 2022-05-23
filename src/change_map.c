/*
** EPITECH PROJECT, 2022
** change_map.c
** File description:
** change_map
*/

#include "../include/rpg.h"

void scale_background(sfSprite *sprite)
{
    sfVector2f scale;

    scale.x = 3;
    scale.y = 3;
    sfSprite_setScale(sprite, scale);
}

void change_background(game_t *game, int map)
{
    game->map = game->maps[map];
    game->actual_map = map;
    sfSprite_destroy(game->background->sprite);
    game->background->sprite = sfSprite_create();
    sfSprite_setTexture(game->background->sprite, game->texture[map], sfTrue);
    scale_background(game->background->sprite);
    sfSprite_setPosition(game->player->sprite, game->player->pos);
    sfSprite_setPosition(game->background->sprite, game->background->pos);
}

void change_map(game_t *game, char gate)
{
    switch (gate) {
        case 'A':
            load_map_a(game);
            break;
        case 'B':
            load_map_b(game);
            break;
        case 'C':
            load_map_c(game);
            break;
        case 'D':
            load_map_d(game);
            break;
        case 'E':
            load_map_e(game);
            break;
    };
    display(game);
}

void detect_change_map(game_t *game)
{
    sfVector2i indx = game->player->index;
    char gate;

    if (indx.y == (ROW - 1) || indx.y == 0 ||
    indx.x == (COLUMN - 1) || indx.x == 0) {
        gate = game->map[indx.y][indx.x];
        change_map(game, gate);
    }
}