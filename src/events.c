/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** events
*/

#include "../include/rpg.h"

void escape_options(t_window *wd)
{
    if (wd->scn_nb == START)
        sfRenderWindow_close(wd->wd);
    if (wd->scn_nb == PLAY) {
        wd->preb_scn = PLAY;
        wd->scn_nb = GMENU;
    }
}

void click(t_window *window, sfMouseButtonEvent mouse, t_butts **button)
{
    int i = 0;
    float but_x = 0, but_y = 0;
    float but_s_x = 0, but_s_y = 0;

    while (button[i] != NULL) {
        but_x = button[i]->pos->x;
        but_s_x = button[i]->size->x;
        but_y = button[i]->pos->y;
        but_s_y = button[i]->size->y;
        if ((float)mouse.x >= but_x && (float)mouse.x <= but_x + but_s_x &&
        (float)mouse.y >= but_y && (float)mouse.y <= but_y + but_s_y) {
        (button[i]->func_ptr)(window, &button[i]);
        }
        i++;
    }
}

void check_events(t_window *wd, t_butts **buttons)
{
    while (sfRenderWindow_pollEvent(wd->wd, &wd->event)) {
        if (wd->event.type == sfEvtClosed)
            sfRenderWindow_close(wd->wd);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            escape_options(wd);
        if (wd->event.type == sfEvtMouseButtonPressed) {
            sfSound_play(wd->sounds->click);
            click(wd, wd->event.mouseButton, buttons);
        }
    }
}
