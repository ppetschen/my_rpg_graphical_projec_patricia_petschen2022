/*
** EPITECH PROJECT, 2022
** my_remalloc.c
** File description:
** remalloc and array of string
*/

#include "../include/my.h"
#include <stdlib.h>

char **my_remalloc_array(char **src, int size)
{
    char **array = malloc(sizeof(char *) * size);

    for (int i = 0; src[i] != NULL; i++)
        array[i] = my_strcpy(array[i], src[i]);
    return array;
}
