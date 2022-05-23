/*
** EPITECH PROJECT, 2022
** free_array_str.c
** File description:
** frees and array of strings
*/

#include <stdlib.h>

void free_array_str(char **str)
{
    if (str != NULL) {
        for (int i = 0; str[i] != NULL; i++)
            free(str[i]);
        free(str);
    }
}
