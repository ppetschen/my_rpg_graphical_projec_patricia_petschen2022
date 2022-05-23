/*
** EPITECH PROJECT, 2022
** move_player_sprite.c
** File description:
** move_player_sprite
*/

#include "../../include/rpg.h"

void move_player_left(game_t *game)
{
    if (can_move_map_left(game)) {
        game->background->pos.x += RUN_MOVE;
        enemy_still_left(game->enemies->enemy[game->actual_map]);
    } else
        game->player->pos.x -= RUN_MOVE;
}

void move_player_right(game_t *game)
{
    if (can_move_map_right(game)) {
        game->background->pos.x -= RUN_MOVE;
        enemy_still_right(game->enemies->enemy[game->actual_map]);
    } else
        game->player->pos.x += RUN_MOVE;
}

void move_player_up(game_t *game)
{
    if (can_move_map_up(game)) {
        game->background->pos.y += RUN_MOVE;
        enemy_still_up(game->enemies->enemy[game->actual_map]);
    } else
        game->player->pos.y -= RUN_MOVE;
}

void move_player_down(game_t *game)
{
    if (can_move_map_down(game)) {
        game->background->pos.y -= RUN_MOVE;
        enemy_still_down(game->enemies->enemy[game->actual_map]);
    } else
        game->player->pos.y += RUN_MOVE;
}

void move_player_sprite(game_t *game)
{
    switch (game->player->direction) {
        case LEFT:
            move_player_left(game);
            break;
        case RIGHT:
            move_player_right(game);
            break;
        case UP:
            move_player_up(game);
            break;
        case DOWN:
            move_player_down(game);
            break;
    };
    sfSprite_setPosition(game->player->sprite, game->player->pos);
    sfSprite_setPosition(game->background->sprite, game->background->pos);
}