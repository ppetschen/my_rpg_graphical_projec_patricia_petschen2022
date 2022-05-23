/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** iniit_sounds
*/

#include "../../include/rpg.h"

void init_sound_buffs(sounds_t *sounds)
{
    sounds->clik_buff = sfSoundBuffer_createFromFile("rsrc/sounds/click.ogg");
    sounds->sword_buff = sfSoundBuffer_createFromFile("rsrc/sounds/sword.ogg");
    sounds->steps_buff = sfSoundBuffer_createFromFile("rsrc/sounds/steps.ogg");
    sfSound_setBuffer(sounds->click, sounds->clik_buff);
    sfSound_setBuffer(sounds->sword, sounds->sword_buff);
    sfSound_setBuffer(sounds->steps, sounds->steps_buff);
}

sounds_t *init_sounds(void)
{
    sounds_t *sounds = malloc(sizeof(sounds_t));

    sounds->menu_music = sfMusic_createFromFile("rsrc/sounds/WII_sports.ogg");
    sounds->music = sfMusic_createFromFile("rsrc/sounds/new_music.ogg");
    sounds->click = sfSound_create();
    sounds->sword = sfSound_create();
    sounds->steps = sfSound_create();
    init_sound_buffs(sounds);
    sfMusic_setVolume(sounds->music, 50);
    sfMusic_setVolume(sounds->menu_music, 70);
    sfMusic_setLoop(sounds->menu_music, sfTrue);
    sfMusic_setLoop(sounds->music, sfTrue);
    sfMusic_play(sounds->menu_music);
    return (sounds);
}
