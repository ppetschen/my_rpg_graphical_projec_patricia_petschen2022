/*
** EPITECH PROJECT, 2022
** init_action_len.c
** File description:
** init_action_len
*/

#include "../../include/rpg.h"

int *enemy_action_len(void)
{
    int *action_len = malloc(sizeof(int) * ENEMY_ACTIONS);

    action_len[E_IDLE] = 30;
    action_len[E_WALK] = 30;
    action_len[E_RUN] = 15;
    action_len[E_ATTACK] = 15;
    action_len[E_HURT] = 15;
    action_len[E_DEAD] = 30;
    return (action_len);
}

int *player_action_len(void)
{
    int *action_len = malloc(sizeof(int) * PLAYER_ACTIONS);

    action_len[IDLE] = 16;
    action_len[WALK] = 15;
    action_len[RUN] = 16;
    action_len[JUMP] = 16;
    action_len[ATTACK] = 18;
    action_len[BLOCK] = 16;
    action_len[HIT] = 13;
    action_len[DEAD] = 9;
    return (action_len);
}
