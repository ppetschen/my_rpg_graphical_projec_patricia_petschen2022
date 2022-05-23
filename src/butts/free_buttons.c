/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** free_buttons
*/

#include "../../include/rpg.h"

void free_buttons_struct(t_butts *buttons)
{
    free(buttons->name);
    free(buttons->pos);
    free(buttons->size);
    sfRectangleShape_destroy(buttons->rect);
    sfTexture_destroy(buttons->texture);
    sfText_destroy(buttons->text);
    free(buttons->txt_pos);
    sfFont_destroy(buttons->font);
    free(buttons);
}

void free_buttons_array(t_butts **buttons)
{
    for (int i = 0; buttons[i] != NULL; i++) {
        free_buttons_struct(buttons[i]);
    }
    free(buttons);
}
