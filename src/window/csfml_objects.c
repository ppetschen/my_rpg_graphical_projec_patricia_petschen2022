/*
** EPITECH PROJECT, 2021
** csfml _objects
** File description:
** csfml objects creator
*/

#include "../../include/rpg.h"

sfRenderWindow *create_window(char *name)
{
    sfVideoMode video_mode = {1920, 1080, 64};
    sfRenderWindow *window;

    window = sfRenderWindow_create(video_mode, name, sfDefaultStyle, NULL);
    return (window);
}

sfSprite *create_sprite(char *filepath, int x, int y)
{
    sfVector2f position = {x, y};
    sfTexture *texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, 0);
    sfSprite_setPosition(sprite, position);
    return (sprite);
}

sfSound *create_sound(char *filepath)
{
    sfSound *sound = sfSound_create();
    sfSoundBuffer *buffer = sfSoundBuffer_createFromFile(filepath);

    sfSound_setBuffer(sound, buffer);
    return (sound);
}

sfText *create_text(char *font_fp, char *str, int x, int y)
{
    sfVector2f pos = {x, y};
    sfFont *font = sfFont_createFromFile(font_fp);
    sfText *text = sfText_create();

    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setPosition(text, pos);
    return (text);
}
