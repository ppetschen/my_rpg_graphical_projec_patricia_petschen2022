/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** checks if s1 is equal to s2
*/

#include "../include/my.h"

int my_strcmp(char const *str1, char const *str2)
{
    if (my_strlen(str1) != my_strlen(str2))
        return (1);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i])
            return (1);
    }
    return (0);
}
