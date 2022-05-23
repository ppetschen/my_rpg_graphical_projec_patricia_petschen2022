/*
** EPITECH PROJECT, 2022
** create_window.c
** File description:
** init_window
*/

#include "../include/rpg.h"

sfRenderWindow *init_window(void)
{
    sfVideoMode mode = sfVideoMode_getDesktopMode();
    sfRenderWindow *window =
    sfRenderWindow_create(mode, "TEST", sfClose | sfFullscreen, NULL);
    sfVector2i pos;

    pos.x = 0;
    pos.y = 0;
    sfRenderWindow_setActive(window, sfTrue);
    sfRenderWindow_setPosition(window, pos);
    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    return (window);
}
