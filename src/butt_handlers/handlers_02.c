/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** handlers_02
*/

#include "../../include/rpg.h"

void handle_prev(t_window *win)
{
    int save_prev = win->preb_scn;

    if (win->scn_nb <= SETTINGS) {
        win->preb_scn = win->scn_nb;
        win->scn_nb = save_prev;
    } else if (win->scn_nb >= MSETTINGS)
        win->scn_nb = SETTINGS;
}

void handle_music(t_window *win)
{
    win->scn_nb = MSETTINGS;
}

void handle_sounds(t_window *win)
{
    win->scn_nb = SSETTINGS;
}

void handle_on(t_window *win)
{
    if (win->scn_nb == MSETTINGS) {
        sfMusic_setVolume(win->sounds->music, 50);
        sfMusic_setVolume(win->sounds->menu_music, 60);
    } else if (win->scn_nb == SSETTINGS) {
        sfSound_setVolume(win->sounds->click, 100);
        sfSound_setVolume(win->sounds->steps, 100);
        sfSound_setVolume(win->sounds->sword, 100);
    }
}

void handle_off(t_window *win)
{
    if (win->scn_nb == MSETTINGS) {
        sfMusic_setVolume(win->sounds->music, 0);
        sfMusic_setVolume(win->sounds->menu_music, 0);
    } else if (win->scn_nb == SSETTINGS) {
        sfSound_setVolume(win->sounds->click, 0);
        sfSound_setVolume(win->sounds->steps, 0);
        sfSound_setVolume(win->sounds->sword, 0);

    }
}
