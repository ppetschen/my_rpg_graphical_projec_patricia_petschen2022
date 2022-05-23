/*
** EPITECH PROJECT, 2022
** display.c
** File description:
** display
*/

#include "../include/rpg.h"

void display_enemies(sfRenderWindow *window, enemy_t *enemy)
{
    enemy_t *temp = enemy;

    while (temp) {
        sfRenderWindow_drawSprite(window, temp->sprite, NULL);
        temp = temp->next;
    }
}

void display(game_t *game)
{
    sfRenderWindow_clear(game->info->wd, sfBlack);
    sfRenderWindow_drawSprite(game->info->wd, game->background->sprite, NULL);
    display_enemies(game->info->wd, game->enemies->enemy[game->actual_map]);
    sfRenderWindow_drawSprite(game->info->wd, game->player->sprite, NULL);
    sfRenderWindow_display(game->info->wd);
}
