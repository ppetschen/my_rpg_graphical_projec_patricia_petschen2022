/*
** EPITECH PROJECT, 2022
** load_map.c
** File description:
** load_map
*/

#include "../include/rpg.h"

void load_map_a(game_t *game)
{
    game->player->index = set_index(31, 22);
    game->player->pos = set_pos(978, 888);
    game->background->pos = set_pos(-1962, -1224);
    change_background(game, MAP_A);
    sfSprite_setPosition(game->player->sprite, game->player->pos);
    sfSprite_setPosition(game->background->sprite, game->background->pos);
}

void load_map_b(game_t *game)
{
    switch (game->actual_map) {
        case MAP_A:
            game->player->index = set_index(6, 1);
            game->player->pos = set_pos(528, 96);
            game->background->pos = set_pos(0, 0);
            break;
        case MAP_C:
            game->player->index = set_index(21, 22);
            game->player->pos = set_pos(882, 888);
            game->background->pos = set_pos(-1086, -1224);
            break;
        case MAP_D:
            game->player->index = set_index(38, 12);
            game->player->pos = set_pos(1648, 504);
            game->background->pos = set_pos(-1950, -648);
            break;
    }
    change_background(game, MAP_B);
}

void load_map_c(game_t *game)
{
    game->player->index = set_index(11, 1);
    game->player->pos = set_pos(976, 96);
    game->background->pos = set_pos(-48, 0);
    change_background(game, MAP_C);
}

void load_map_d(game_t *game)
{
    switch (game->actual_map) {
        case MAP_B:
            game->player->index = set_index(1, 5);
            game->player->pos = set_pos(48, 456);
            game->background->pos = set_pos(0, -24);
            break;
        case MAP_E:
            game->player->index = set_index(33, 22);
            game->player->pos = set_pos(1170, 888);
            game->background->pos = set_pos(-1950, -1224);
            break;
    }
    change_background(game, MAP_D);
}

void load_map_e(game_t *game)
{
    game->player->index = set_index(6, 1);
    game->player->pos = set_pos(528, 96);
    game->background->pos = set_pos(0, 0);
    change_background(game, MAP_E);
}
