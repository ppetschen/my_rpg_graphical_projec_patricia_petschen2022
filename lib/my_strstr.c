/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** finds a substring in a string
*/

#include "../include/my.h"
#include <stddef.h>

#include <stdio.h>

char *my_strstr(char *s1, char const *s2)
{
    while (*s1 != '\0') {
        if (my_strncmp(s1, s2, my_strlen(s2)) == 1)
            return s1;
        else
            s1 += 1;
    }
    return NULL;
}
