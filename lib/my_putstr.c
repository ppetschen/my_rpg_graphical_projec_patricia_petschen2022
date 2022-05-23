/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** writes a string
*/

#include <unistd.h>

int my_strlen(char const *str);

int my_putstr(char const *str)
{
    int len = my_strlen(str);

    if (len)
        write(1, str, len);
    return (0);
}
