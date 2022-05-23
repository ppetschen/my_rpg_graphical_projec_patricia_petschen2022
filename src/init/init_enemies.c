/*
** EPITECH PROJECT, 2022
** init_enemies.c
** File description:
** init_enemies
*/

#include "../../include/rpg.h"

void scale_enemy(enemy_t *enemy)
{
    sfVector2f scale;

    scale.x = 1.5;
    scale.y = 1.5;
    sfSprite_scale(enemy->sprite, scale);
}

enemy_t *new_enemy(int y, int x, sfTexture *texture)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));

    enemy->action = E_IDLE;
    enemy->att_damage = 10;
    enemy->blocked = sfFalse;
    enemy->direction = DOWN;
    enemy->frame = 0;
    enemy->health = 100;
    enemy->index = set_index(x, y);
    enemy->pos = set_pos((x * MOVE) - 20, (y * MOVE) - 20);
    enemy->rect = set_rect(0, 100, 0, 100);
    enemy->sprite = init_sprite(texture);
    enemy->status = LIVE;
    scale_enemy(enemy);
    sfSprite_setPosition(enemy->sprite, enemy->pos);
    enemy->clock = sfClock_create();
    enemy->next = NULL;
    return (enemy);
}

void add_enemy(enemy_t **enemy, int y, int x, sfTexture *texture)
{
    enemy_t *temp = *enemy;
    enemy_t *new = new_enemy(y, x, texture);

    if (!(*enemy))
        *enemy = new;
    else {
        while (temp->next)
            temp = temp->next;
        temp->next = new;
    }
}

enemy_t *init_enemies_map(char **map, sfTexture *texture)
{
    enemy_t *enemy = NULL;

    for (int y = 0; y < ROW; y++) {
        for (int x = 0; x < COLUMN; x++) {
            if (map[y][x] == 'X')
                add_enemy(&enemy, y, x, texture);
        }
    }
    return (enemy);
}

enemies_t *init_enemies(char ***maps, sfTexture *texture)
{
    enemies_t *enemies = malloc(sizeof(enemies_t));

    enemies->enemy = malloc(sizeof(enemy_t *) * MAPS);
    enemies->action_len = enemy_action_len();
    for (int i = 0; i < MAPS; i++)
        enemies->enemy[i] = init_enemies_map(maps[i], texture);
    return (enemies);
}
