/*
** EPITECH PROJECT, 2022
** move_player.c
** File description:
** move_player
*/

#include "../../include/rpg.h"

void left(game_t *game)
{
    game->player->direction = LEFT;
    if (!is_collision_left(game)) {
        game->player->action = RUN;
        game->player->index.x--;
    }
}

void right(game_t *game)
{
    game->player->direction = RIGHT;
    if (!is_collision_right(game)) {
        game->player->action = RUN;
        game->player->index.x++;
    }
}

void up(game_t *game)
{
    game->player->direction = UP;
    if (!is_collision_up(game)) {
        game->player->action = RUN;
        game->player->index.y--;
    }
}

void down(game_t *game)
{
    game->player->direction = DOWN;
    if (!is_collision_down(game)) {
        game->player->action = RUN;
        game->player->index.y++;
    }
}

void idle(player_t *player)
{
    if (player->action != IDLE) {
        player->action = IDLE;
        player->frame = 0;
        player->blocked = sfFalse;
    }
}
