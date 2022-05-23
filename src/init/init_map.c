/*
** EPITECH PROJECT, 2022
** init_map.c
** File description:
** init_map
*/

#include "../include/rpg.h"

char **init_map(char *pathfile)
{
    int fd = open(pathfile, O_RDONLY);
    char *file = malloc(BUFFERSIZE);
    char **map = malloc(sizeof(char *) * (ROW + 1));

    int i = 0;
    read(fd, file, BUFFERSIZE);
    for (int y = 0; y < ROW; y++) {
        map[y] = malloc(COLUMN + 1);
        for (int x = 0; x < COLUMN; x++) {
            map[y][x] = file[i];
            i++;
        }
        i++;
        map[y][COLUMN] = '\0';
    }
    map[ROW] = NULL;
    free(file);
    return (map);
}
