/*
** EPITECH PROJECT, 2022
** change_sprite_enemy.c
** File description:
** change_sprite_enemy
*/

#include "../../include/rpg.h"

sfIntRect move_rect_enemy(sfIntRect rect, int action, int direction, int frame)
{
    sfIntRect res;

    res.left = rect.width * frame;
    res.width = rect.width;
    res.top = (rect.height * action) +
    (rect.height * ENEMY_ACTIONS * direction);
    res.height = rect.height;
    return (res);
}

void move_sprite_enemy(enemy_t *enemy)
{
    (void)enemy;
    return;
}

void change_sprite_enemy(enemy_t *enemy, int *action_len)
{
    enemy->rect = move_rect_enemy(enemy->rect, enemy->action,
    enemy->direction, enemy->frame);
    if (enemy->frame < action_len[enemy->action]) {
        if (enemy->action == RUN)
            move_sprite_enemy(enemy);
        enemy->frame++;
        sfSprite_setTextureRect(enemy->sprite, enemy->rect);
    } else {
        if (enemy->action == E_DEAD)
            enemy->status = DEAD;
        else {
            enemy->action = IDLE;
            enemy->frame = 0;
            enemy->blocked = sfFalse;
        }
    }
}
