/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** buttons_array_len
*/

#include "../../include/rpg.h"

int buttons_array_len(t_butts **buttons)
{
    int i = 0;

    while (buttons[i] != NULL) {
        i++;
    }
    return (i);
}
