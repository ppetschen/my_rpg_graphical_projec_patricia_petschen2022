/*
** EPITECH PROJECT, 2022
** init_player.c
** File description:
** init_player
*/

#include "../../include/rpg.h"

sfSprite *init_sprite(sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}

void set_scale_player(player_t *player)
{
    sfVector2f scale;

    scale.x = 0.6;
    scale.y = 0.6;
    sfSprite_setScale(player->sprite, scale);
}

player_t *init_player(sfTexture *texture)
{
    player_t *player = malloc(sizeof(player_t));

    player->sprite = init_sprite(texture);
    player->rect = set_rect(0, 299, 0, 240);
    player->action_len = player_action_len();
    player->pos = set_pos(180 - MOVE / 4, 144 - MOVE / 2);
    player->index = set_index(2, 1);
    player->direction = DOWN;
    player->action = IDLE;
    player->frame = 0;
    player->blocked = sfFalse;
    set_scale_player(player);
    player->health = 100;
    player->att_damage = 25;
    sfSprite_setPosition(player->sprite, player->pos);
    return (player);
}
