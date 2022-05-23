/*
** EPITECH PROJECT, 2022
** init_texture.c
** File description:
** init_texture
*/

#include "../../include/rpg.h"

sfTexture **init_texture(void)
{
    sfTexture **texture = malloc(sizeof(sfTexture *) * TEXTURES);

    texture[MAP_A] =
    sfTexture_createFromFile("rsrc/maps/A.png", NULL);
    texture[MAP_B] =
    sfTexture_createFromFile("rsrc/maps/B.png", NULL);
    texture[MAP_C] = sfTexture_createFromFile("rsrc/maps/C.png", NULL);
    texture[MAP_D] = sfTexture_createFromFile("rsrc/maps/D.png", NULL);
    texture[MAP_E] = sfTexture_createFromFile("rsrc/maps/E.png", NULL);
    texture[PLAYER] =
    sfTexture_createFromFile("rsrc/sprites/crusader.png", NULL);
    texture[ENEMY1] =
    sfTexture_createFromFile("rsrc//sprites/warrior.png", NULL);
    return (texture);
}
