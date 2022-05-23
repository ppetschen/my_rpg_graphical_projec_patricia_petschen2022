/*
** EPITECH PROJECT, 2022
** move_mouse.c
** File description:
** move_mouse
*/

#include "../../include/rpg.h"

void attack(game_t *game)
{
    game->player->action = ATTACK;
}

void block(game_t *game)
{
    game->player->action = BLOCK;
}
