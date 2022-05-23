/*
** EPITECH PROJECT, 2022
** print_array.c
** File description:
** prints an array of arrays
*/

#include "../include/my.h"
#include <stdlib.h>

void print_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        my_putstr(array[i]);
        my_putchar('\n');
        i++;
    }
}
