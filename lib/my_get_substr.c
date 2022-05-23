/*
** EPITECH PROJECT, 2022
** my_get_substr.c
** File description:
** gets a substring of a string
*/

#include <stdlib.h>

char *my_get_substr(char *str, int ini, int len)
{
    char *word = malloc(len);

    for (int i = 0; i < len; i++) {
        word[i] = str[ini + i];
    }
    return word;
}
