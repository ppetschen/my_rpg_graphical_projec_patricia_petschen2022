/*
** EPITECH PROJECT, 2022
** my_get_line.c
** File description:
** gets the line of the terminal
*/

#include <stdio.h>

char *my_get_line(void)
{
    char *buf;
    size_t len = 0;
    ssize_t line_size = 0;

    line_size = getline(&buf, &len, stdin);
    return (buf);
}
