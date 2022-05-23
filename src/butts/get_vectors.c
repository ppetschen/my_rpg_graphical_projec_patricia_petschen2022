/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** get_vectors
*/

#include "../../include/rpg.h"

void get_vectors_txt_pos(char *num_x, char *num_y, t_butts *buttons)
{
    buttons->txt_pos = malloc(sizeof(sfVector2f));
    buttons->txt_pos->x = my_getnbr(num_x);
    buttons->txt_pos->y = my_getnbr(num_y);
}

void get_vectors_pos(char *num_x, char *num_y, t_butts *buttons)
{
    buttons->pos = malloc(sizeof(sfVector2f));
    buttons->pos->x = my_getnbr(num_x);
    buttons->pos->y = my_getnbr(num_y);
}

void get_vectors_size(char *num_x, char *num_y, t_butts *buttons)
{
    buttons->size = malloc(sizeof(sfVector2f));
    buttons->size->x = my_getnbr(num_x);
    buttons->size->y = my_getnbr(num_y);
}

void get_vectors(char **line_arr, t_butts *button)
{
    char **pos = my_str_to_word_array(line_arr[2], ' ');
    char **size = my_str_to_word_array(line_arr[3], ' ');
    char **txt_pos = my_str_to_word_array(line_arr[6], ' ');

    get_vectors_txt_pos(txt_pos[0], txt_pos[1], button);
    get_vectors_pos(pos[0], pos[1], button);
    get_vectors_size(size[0], size[1], button);
    for (int i = 0; i <= 2; i++) {
        free(pos[i]);
        free(size[i]);
        free(txt_pos[i]);
    }
    free(pos);
    free(size);
    free(txt_pos);
}
