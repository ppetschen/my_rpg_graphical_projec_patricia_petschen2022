/*
** EPITECH PROJECT, 2022
** can_move_map.c
** File description:
** can_move_map
*/

#include "../../include/rpg.h"

int can_move_map_left(game_t *game)
{
    sfVector2i ind = game->player->index;

    if ((ind.x > 8) &&
    (game->player->pos.x < 880))
        return (1);
    else
        return (0);
}

int can_move_map_right(game_t *game)
{
    sfVector2i ind = game->player->index;

    if ((ind.x < COLUMN - 9) &&
    (game->player->pos.x > 880))
        return (1);
    else
        return (0);
}

int can_move_map_up(game_t *game)
{
    sfVector2i ind = game->player->index;

    if ((ind.y > 4) &&
    (game->player->pos.y < 500))
        return (1);
    else
        return (0);
}

int can_move_map_down(game_t *game)
{
    sfVector2i ind = game->player->index;

    if ((ind.y < ROW - 5) &&
    (game->player->pos.y > 500))
        return (1);
    else
        return (0);
}
