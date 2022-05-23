/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** copies a string into another
*/

#include <stdlib.h>
#include "../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int size = my_strlen(src);
    char *res = malloc(size + 1);

    res[size] = '\0';
    free(dest);
    for (int i = 0; i < size; i++)
        res[i] = src[i];
    return (res);
}
