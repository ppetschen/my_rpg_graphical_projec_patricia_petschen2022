/*
** EPITECH PROJECT, 2022
** enemy_attack.c
** File description:
** enemy_attack
*/

#include "rpg.h"

int is_in_attack_zone(sfVector2i ind, sfVector2i ind_ene)
{
    int x_diff = ind.x - ind_ene.x;
    int y_diff = ind.y - ind_ene.y;

    if (x_diff < 0)
        x_diff *= -1;
    if (y_diff < 0)
        y_diff *= -1;
    if ((x_diff + y_diff) < 2) {
        return (1);
    } else
        return (0);
}

void enemy_attack(enemy_t *enemy)
{
    sfTime time = sfClock_getElapsedTime(enemy->clock);

    if (sfTime_asSeconds(time) >= 3) {
        enemy->frame = 0;
        enemy->action = E_ATTACK;
        enemy->blocked = sfTrue;
        sfClock_restart(enemy->clock);
    }
}

void check_enemy_attack(enemy_t *enemy, sfVector2i ind)
{
    enemy_t *temp = enemy;

    while (temp) {
        if (is_in_attack_zone(ind, temp->index) &&
        enemy->action != E_ATTACK)
            enemy_attack(temp);
        temp = temp->next;
    }
}
