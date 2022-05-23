/*
** EPITECH PROJECT, 2022
** check_hit.c
** File description:
** check_hit
*/

#include "../../include/rpg.h"

void check_dead(player_t *player, enemy_t *enemy, char **map)
{
    enemy->frame = 0;
    enemy->health -= player->att_damage;
    if (enemy->health > 0)
        enemy->action = E_HURT;
    else {
        enemy->action = E_DEAD;
        map[enemy->index.y][enemy->index.x] = 'x';
    }
}

void check_hit(game_t *game, int x, int y)
{
    enemy_t *temp = game->enemies->enemy[game->actual_map];

    while (temp) {
        if (temp->index.x == x && temp->index.y == y &&
        temp->action != E_DEAD)
            check_dead(game->player, temp, game->map);
        temp = temp->next;
    }
}

void check_hit_player(game_t *game)
{
    sfVector2i ind;

    if (game->player->action == ATTACK &&
    game->player->frame == PLAYER_HIT_ACTION) {
        ind = game->player->index;
        switch (game->player->direction) {
            case LEFT:
                check_hit(game, ind.x - 1, ind.y);
                break;
            case RIGHT:
                check_hit(game, ind.x + 1, ind.y);
                break;
            case UP:
                check_hit(game, ind.x, ind.y - 1);
                break;
            case DOWN:
                check_hit(game, ind.x, ind.y + 1);
                break;
        };
    }
}