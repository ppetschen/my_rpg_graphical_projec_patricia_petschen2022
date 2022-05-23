/*
** EPITECH PROJECT, 2022
** count_lines_array
** File description:
** counts the lines of a array of arrays
*/

#include <stdlib.h>

int count_lines_array(char **array)
{
    int i = 0;

    while (array[i] != NULL)
        i++;
    return (i);
}
