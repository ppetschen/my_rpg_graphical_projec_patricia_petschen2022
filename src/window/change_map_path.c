/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** change_map_path
*/

#include "../../include/rpg.h"

void map_renew(t_window *wd, char new)
{
    sfTexture_destroy(wd->map_texture);
    wd->map_path[11] = new;
    wd->map_texture = sfTexture_createFromFile(wd->map_path, NULL);
}
