/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** free_wd_struct
*/

#include "../../include/rpg.h"

void free_wd_struct(t_window *wd)
{
    sfRenderWindow_destroy(wd->wd);
    free(wd->map_path);
    sfTexture_destroy(wd->map_texture);
    sfSprite_destroy(wd->back);
    free_sounds_struct(wd->sounds);
    free(wd->sounds);
    free(wd);
}
