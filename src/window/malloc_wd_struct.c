/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** malloc_wd_struct
*/

#include "../../include/rpg.h"

//sounds_t init_sounds(void);

t_window *malloc_wd_struct(char *wd_name)
{
    t_window *window = malloc(sizeof(t_window));
    window->wd = create_window(wd_name);
    window->map_path = my_strdup("rsrc/sprites/output.png");
    window->map_texture = sfTexture_createFromFile(window->map_path, NULL);
    window->back = create_sprite(window->map_path, 0, 1);
    window->scn_nb = START;
    window->preb_scn = START;
    window->sounds = init_sounds();
    window->scn_checker = START;
    window->sword = MINI;
    return (window);
}
