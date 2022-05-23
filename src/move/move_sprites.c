/*
** EPITECH PROJECT, 2022
** moves_sprites.c
** File description:
** move_sprites
*/

#include "../../include/rpg.h"

void move_sprites(game_t *game)
{
    if (game->player->action == RUN &&
    game->player->frame < PLAYER_RUN_ACTION)
        move_player_sprite(game);
}
