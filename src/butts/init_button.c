/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** init_button
*/

#include "../../include/rpg.h"

void go_set_rectangle(t_butts *but, char **line_arr)
{
    sfVector2f temp_vector = {0, 0};

    but->font = sfFont_createFromFile(line_arr[7]);

    but->texture = sfTexture_createFromFile(line_arr[1], NULL);
    temp_vector.x = but->pos->x;
    temp_vector.y = but->pos->y;
    but->rect = sfRectangleShape_create();
    sfRectangleShape_setPosition(but->rect, temp_vector);
    temp_vector.x = but->size->x;
    temp_vector.y = but->size->y;
    sfRectangleShape_setSize(but->rect, temp_vector);
    temp_vector.x = but->txt_pos->x;
    temp_vector.y = but->txt_pos->y;
    but->text = write_text(but->font, but->name, temp_vector, but->txt_size);
    sfRectangleShape_setTexture(but->rect, but->texture, 0);
}

void init_butons(t_butts *button, char *line)
{
    char **line_arr = my_str_to_word_array(line, ':');
    int i = 0;

    button->txt_size = my_getnbr(line_arr[5]);
    button->name = my_strdup(line_arr[0]);
    get_vectors(line_arr, button);
    go_set_rectangle(button, line_arr);
    while (i < 16) {
        if (my_strcmp(line_arr[4], handlers[i].identifier) == 0) {
            button->func_ptr = handlers[i].fn_ptr;
        }
        i++;
    }
    free(line);
    free_array_str(line_arr);
}

t_butts **malloc_buttons_array(char **lines)
{
    int lines_nb = my_arraylen(lines);
    t_butts **buttons = malloc(sizeof(t_butts *) * (lines_nb + 1));

    for (int i = 0; i < lines_nb; i++) {
        buttons[i] = malloc(sizeof(t_butts));
        init_butons(buttons[i], lines[i]);
    }
    buttons[lines_nb] = NULL;
    return (buttons);
}

t_butts **get_buttons(char *file_path)
{
    char *file_str = read_file(file_path);
    char **lines = my_str_to_word_array(file_str, '\n');
    t_butts **buttons = malloc_buttons_array(lines);

    free(file_str);
    free(lines);
    return (buttons);
}
