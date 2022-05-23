/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** load_music
*/

#include "../../include/rpg.h"

void load_music(t_window *wd)
{
    if (wd->scn_nb == PLAY) {
        sfMusic_pause(wd->sounds->menu_music);
        sfMusic_play(wd->sounds->music);
    } else if (wd->scn_nb != PLAY && wd->preb_scn == PLAY) {
        sfMusic_pause(wd->sounds->music);
        sfMusic_play(wd->sounds->menu_music);
    }
}
