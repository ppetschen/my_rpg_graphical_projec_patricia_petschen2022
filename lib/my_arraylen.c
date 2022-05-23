/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** my_arraylen
*/

#include <stdlib.h>

int my_arraylen(char **str)
{
    int len = 0;

    if (str != NULL) {
        for (int i = 0; str[i] != NULL; i++)
            len++;
    }
    return (len);
}
