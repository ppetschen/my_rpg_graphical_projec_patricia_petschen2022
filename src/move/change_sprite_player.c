/*
** EPITECH PROJECT, 2022
** change_sprite_player.c
** File description:
** change_sprite_player
*/

#include "../../include/rpg.h"

sfIntRect move_rect_player(sfIntRect rect, int action, int direction, int frame)
{
    sfIntRect res;

    res.left = rect.width * frame;
    res.width = rect.width;
    res.top = (rect.height * action) +
    (rect.height * PLAYER_ACTIONS * direction);
    res.height = rect.height;
    return (res);
}

void change_sprite_player(player_t *player)
{
    player->rect = move_rect_player(player->rect, player->action,
    player->direction, player->frame);
    if (player->frame < player->action_len[player->action]) {
        player->frame++;
        sfSprite_setTextureRect(player->sprite, player->rect);
    } else {
        player->frame = 0;
        player->blocked = sfFalse;
    }
}
