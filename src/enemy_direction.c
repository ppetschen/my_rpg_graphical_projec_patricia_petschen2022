/*
** EPITECH PROJECT, 2022
** enemy_attack.c
** File description:
** enemy_attack
*/

#include "rpg.h"

int player_is_near(sfVector2i ind_player, sfVector2i ind_enemy)
{
    sfVector2i ind;

    ind.x = ind_player.x - ind_enemy.x;
    ind.y = ind_player.y - ind_enemy.y;
    if (ind.x <= ENEMY_ZONE && ind.x >= -ENEMY_ZONE) {
        if (ind.y <= ENEMY_ZONE && ind.y >= -ENEMY_ZONE)
            return (1);
    }
    return (0);
}

int change_enemy_direction_vertical(int y, int y_enemy)
{
    if (y < y_enemy)
        return (UP);
    else
        return (DOWN);
}

int change_enemy_direction_horizontal(int x, int x_enemy)
{
    if (x < x_enemy)
        return (LEFT);
    else
        return (RIGHT);
}

void change_enemy_direction(sfVector2i ind, enemy_t *enemy)
{
    sfVector2i ind_enemy = enemy->index;
    int x_diff = ind.x - ind_enemy.x;
    int y_diff = ind.y - ind_enemy.y;

    if (x_diff < 0)
        x_diff *= -1;
    if (y_diff < 0)
        y_diff *= -1;
    if (y_diff >= x_diff)
        enemy->direction =
            change_enemy_direction_vertical(ind.y, ind_enemy.y);
    else
        enemy->direction =
            change_enemy_direction_horizontal(ind.x, ind_enemy.x);
}

void enemy_direction(sfVector2i ind, enemy_t *enemy)
{
    enemy_t *temp = enemy;

    while (temp) {
        if (player_is_near(ind, temp->index))
            change_enemy_direction(ind, temp);
        temp = temp->next;
    }
}