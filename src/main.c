/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** main
*/

#include "../include/rpg.h"

t_butts **scn_changes(t_butts **buttons, t_window *win)
{
    if (win->scn_checker == win->scn_nb)
        return (buttons);
    if (win->scn_nb == START)
        buttons = get_buttons("conf/menu/.buttons");
    if (win->scn_nb == PLAY)
        buttons = get_buttons("conf/menu/.corner_menu");
    if (win->scn_nb == GMENU)
        buttons = get_buttons("conf/menu/.in_game_menu");
    if (win->scn_nb == SETTINGS)
        buttons = get_buttons("conf/menu/.settings");
    if (win->scn_nb == MSETTINGS)
        buttons = get_buttons("conf/menu/.music_settings");
    if (win->scn_nb == SSETTINGS)
        buttons = get_buttons("conf/menu/.sound_settings");
    if (win->scn_nb == CONTROLS)
        buttons = get_buttons("conf/menu/.how_to_play");
    if (win->scn_nb == INVENTORY)
        buttons = get_buttons("conf/menu/.inventory");
    load_music(win);
    return (buttons);
}

void draw_menu_butts(t_window *wd, t_butts **buttons)
{
    for (int i = 0; buttons[i]; i++) {
        sfRenderWindow_drawRectangleShape(wd->wd, buttons[i]->rect, NULL);
        sfRenderWindow_drawText(wd->wd, buttons[i]->text, NULL);
    }

}

void display_main(t_window *wd, t_butts **buttons, sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);

    if (sfTime_asMilliseconds(time) >= 30) {
        sfRenderWindow_clear(wd->wd, sfBlack);
        sfRenderWindow_drawSprite(wd->wd, wd->back, NULL);
        draw_menu_butts(wd, buttons);
        sfRenderWindow_display(wd->wd);
        sfClock_restart(clock);
    }
}

int main(void)
{
    t_butts **buttons = get_buttons("conf/menu/.buttons");
    t_window *wd = malloc_wd_struct("MAGNUS HEROS");
    game_t *game = init_game(wd, buttons);
    sfMusic_play(wd->sounds->menu_music);
    sfClock *clock = sfClock_create();

    while (sfRenderWindow_isOpen(wd->wd)) {
        if (wd->scn_nb == PLAY) {
            exc_game(game);
        }
        display_main(wd, buttons, clock);
        buttons = scn_changes(buttons, wd);
        wd->scn_checker = wd->scn_nb;
        check_events(wd, buttons);
    }
    free_buttons_array(buttons);
    free_wd_struct(wd);
    return (0);
}
