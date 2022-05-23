/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** handlers_01
*/

#include "../../include/rpg.h"

void handle_null(t_window *win)
{
    (void)win;
}

void handle_quit(t_window *win)
{
    sfRenderWindow_close(win->wd);
}

void handle_play(t_window *win)
{
    win->preb_scn = win->scn_nb;
    win->scn_nb = PLAY;
}

void handle_menu(t_window *win)
{
    win->preb_scn = win->scn_nb;
    win->scn_nb = GMENU;
}

void handle_settings(t_window *win)
{
    win->preb_scn = win->scn_nb;
    win->scn_nb = SETTINGS;
}
