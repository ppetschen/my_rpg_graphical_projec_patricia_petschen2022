/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** my_strdup
*/

#include "../include/my.h"
#include <stdlib.h>

char *my_strdup(char *src)
{
    int len;
    char *str = NULL;

    if (src) {
        len = my_strlen(src);
        str = malloc(len + 1);
        str[len] = '\0';
        for (int i = 0; i < len; i++)
            str[i] = src[i];
    }
    return (str);
}
