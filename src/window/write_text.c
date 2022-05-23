/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** write_text
*/

#include "../../include/rpg.h"

sfText *write_text(sfFont *font, char *str, sfVector2f pos, int size)
{
    sfText *text = sfText_create();
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setColor(text, sfBlack);
    sfText_setCharacterSize(text, size);
    sfText_setPosition(text, pos);
    return (text);
}