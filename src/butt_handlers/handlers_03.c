/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** handlers_03
*/

#include "../../include/rpg.h"

void handle_controls(t_window *win)
{
    win->preb_scn = win->scn_nb;
    win->scn_nb = CONTROLS;
}

void handle_main_menu(t_window *win)
{
    win->preb_scn = PLAY;
    win->scn_nb = START;
}

void handle_sword00(t_window *win)
{
    win->sword = MINI;
}

void handle_sword01(t_window *win)
{
    win->sword = NORMAL;
}

void handle_sword02(t_window *win)
{
    win->sword = PURPLE;
}
