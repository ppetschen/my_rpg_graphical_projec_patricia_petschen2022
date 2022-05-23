/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** free_sounds_struct
*/

#include "../../include/rpg.h"

void free_sounds_struct(sounds_t *sounds)
{
    sfSound_destroy(sounds->click);
    sfSound_destroy(sounds->sword);
    sfSound_destroy(sounds->steps);
    sfSoundBuffer_destroy(sounds->clik_buff);
    sfSoundBuffer_destroy(sounds->steps_buff);
    sfSoundBuffer_destroy(sounds->sword_buff);
    sfMusic_destroy(sounds->menu_music);
    sfMusic_destroy(sounds->music);
}
