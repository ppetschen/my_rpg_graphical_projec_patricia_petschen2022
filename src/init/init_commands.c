/*
** EPITECH PROJECT, 2022
** init_commands.c
** File description:
** init_commands
*/

#include "../include/rpg.h"

key_command_t *init_keys(void)
{
    key_command_t *key = malloc(sizeof(key_command_t) * KEY_COMMANDS);

    key[LEFT].code = sfKeyA;
    key[LEFT].func = &left;
    key[RIGHT].code = sfKeyD;
    key[RIGHT].func = &right;
    key[UP].code = sfKeyW;
    key[UP].func = &up;
    key[DOWN].code = sfKeyS;
    key[DOWN].func = &down;
    return (key);
}

mouse_command_t *init_mouse(void)
{
    mouse_command_t *mouse = malloc(sizeof(mouse_command_t) * MOUSE_COMMANDS);

    mouse[M_ATTACK].code = sfMouseLeft;
    mouse[M_ATTACK].func = &attack;
    mouse[M_BLOCK].code = sfMouseRight;
    mouse[M_BLOCK].func = &block;
    return (mouse);
}

command_t *init_commands(void)
{
    command_t *command = malloc(sizeof(command_t));

    command->key = init_keys();
    command->mouse = init_mouse();
    return (command);
}
