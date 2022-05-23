/*
** EPITECH PROJECT, 2022
** is_collision.c
** File description:
** is_collision
*/

#include "../../include/rpg.h"

int is_collision_left(game_t *game)
{
    sfVector2i index = game->player->index;
    char c = game->map[index.y][index.x - 1];

    if (c != 'X' && c != '1') {
        return (0);
    }
    return (1);
}

int is_collision_right(game_t *game)
{
    sfVector2i index = game->player->index;
    char c = game->map[index.y][index.x + 1];

    if (c != 'X' && c != '1') {
        return (0);
    }
    return (1);
}

int is_collision_up(game_t *game)
{
    sfVector2i index = game->player->index;
    char c = game->map[index.y - 1][index.x];

    if (c != 'X' && c != '1') {
        return (0);
    }
    return (1);
}

int is_collision_down(game_t *game)
{
    sfVector2i index = game->player->index;
    char c = game->map[index.y + 1][index.x];

    if (c != 'X' && c != '1') {
        return (0);
    }
    return (1);
}
