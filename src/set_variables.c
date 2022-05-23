/*
** EPITECH PROJECT, 2022
** set_variables.c
** File description:
** set_variables
*/

#include "../include/rpg.h"

sfVector2f set_pos(int x, int y)
{
    sfVector2f pos;

    pos.x = x;
    pos.y = y;
    return (pos);
}

sfIntRect set_rect(int left, int width, int top, int height)
{
    sfIntRect rect;

    rect.left = left;
    rect.width = width;
    rect.top = top;
    rect.height = height;
    return (rect);
}

sfVector2i get_index(sfVector2f pos)
{
    sfVector2i index;

    index.x = (pos.x + MOVE) / MOVE;
    index.y = pos.y / MOVE;
    return (index);
}

sfVector2i set_index(int x, int y)
{
    sfVector2i index;

    index.x = x;
    index.y = y;
    return (index);
}
