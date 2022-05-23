/*
** EPITECH PROJECT, 2022
** change_sprite.c
** File description:
** change_sprite
*/

#include "../../include/rpg.h"

void change_sprites(game_t *game)
{
    enemy_t *temp = game->enemies->enemy[game->actual_map];

    while (temp) {
        if (temp->status != DEAD)
            change_sprite_enemy(temp, game->enemies->action_len);
        temp = temp->next;
    }
    change_sprite_player(game->player);
}
