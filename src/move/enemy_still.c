/*
** EPITECH PROJECT, 2022
** enemy_still.c
** File description:
** enemy_still
*/

#include "../../include/rpg.h"

void enemy_still_left(enemy_t *enemy)
{
    enemy_t *temp = enemy;

    while (temp) {
        temp->pos.x += RUN_MOVE;
        sfSprite_setPosition(temp->sprite, temp->pos);
        temp = temp->next;
    }
}

void enemy_still_right(enemy_t *enemy)
{
    enemy_t *temp = enemy;

    while (temp) {
        temp->pos.x -= RUN_MOVE;
        sfSprite_setPosition(temp->sprite, temp->pos);
        temp = temp->next;
    }
}

void enemy_still_up(enemy_t *enemy)
{
    enemy_t *temp = enemy;

    while (temp) {
        temp->pos.y += RUN_MOVE;
        sfSprite_setPosition(temp->sprite, temp->pos);
        temp = temp->next;
    }
}

void enemy_still_down(enemy_t *enemy)
{
    enemy_t *temp = enemy;

    while (temp) {
        temp->pos.y -= RUN_MOVE;
        sfSprite_setPosition(temp->sprite, temp->pos);
        temp = temp->next;
    }
}
