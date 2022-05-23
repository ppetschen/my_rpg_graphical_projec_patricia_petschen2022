/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** concatenates two strings
*/

#include "../include/my.h"
#include <stdlib.h>


#include <stdio.h>

char *concatenate(char *dest, char *src)
{
    char *res = NULL;
    int len_dest = my_strlen(dest);
    int len_src = my_strlen(src);
    int i = 0;
    int j = 0;

    res = malloc(len_dest + len_src + 1);
    res[len_dest + len_src] = '\0';
    for (i = 0; i < len_dest; i++)
        res[i] = dest[i];
    for (j = 0; j < len_src; j++)
        res[i + j] = src[j];
    free(dest);
    return (res);
}

char *my_strcat(char *dest, char *src)
{
    if (!dest && !src)
        return (NULL);
    if (!dest)
        return (my_strcpy(dest, src));
    if (!src)
        return (dest);
    if (dest && src)
        return (concatenate(dest, src));
}
