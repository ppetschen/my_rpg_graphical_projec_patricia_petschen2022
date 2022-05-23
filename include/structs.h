/*
** EPITECH PROJECT, 2022
** structs.h
** File description:
** structs
*/

#ifndef STRUCTS_H_
    #define STRUCTS_H_

        #include "csfml.h"

    enum menus{START, CONTROLS, PLAY, GMENU, SETTINGS, MSETTINGS, SSETTINGS, \
    INVENTORY};

    enum swords{MINI, NORMAL, PURPLE, BIG_PURPLE};

    enum textures{MAP_A, MAP_B, MAP_C,
    MAP_D, MAP_E, PLAYER, ENEMY1};

    enum actions{IDLE, WALK, RUN, JUMP, ATTACK, BLOCK, HIT, DEAD};

    enum enemy_actions{E_IDLE, E_WALK, E_RUN, E_ATTACK, E_HURT, E_DEAD};

    enum keys{LEFT, RIGHT, UP, DOWN};

    enum mouse{M_ATTACK, M_BLOCK};

    enum compare{BIGGER, LOWER};

    enum status{LIVE, UNLIVE};

    typedef struct sounds_s {
        sfMusic *music;
        sfMusic *menu_music;
        sfSoundBuffer *clik_buff;
        sfSoundBuffer *sword_buff;
        sfSoundBuffer *steps_buff;
        sfSound *click;
        sfSound *sword;
        sfSound *steps;
    } sounds_t;

    typedef struct s_window {
        int preb_scn;
        int scn_nb;
        int scn_checker;
        int sword;
        sfRenderWindow *wd;
        sfEvent event;
        char *map_path;
        sfTexture *map_texture;
        sfSprite *back;
        sounds_t *sounds;
    } t_window;

    typedef struct butts_s {
        char *name;
        sfVector2f *pos;
        sfVector2f *size;
        sfRectangleShape *rect;
        sfTexture *texture;
        sfText *text;
        int txt_size;
        sfVector2f *txt_pos;
        sfFont *font;
        void (*func_ptr)(t_window *, struct butts_s **);
    } t_butts;

    typedef struct player_s {
        sfSprite *sprite;
        sfVector2f pos;
        sfVector2i index;
        sfIntRect rect;
        int direction;
        int *action_len;
        int action;
        int health;
        int att_damage;
        int frame;
        int blocked;
    }player_t;

    typedef struct enemy_s {
        sfSprite *sprite;
        sfVector2f pos;
        sfIntRect rect;
        sfVector2i index;
        int direction;
        int action;
        int health;
        int att_damage;
        int frame;
        int blocked;
        int status;
        sfClock *clock;
        struct enemy_s *next;
    }enemy_t;

    typedef struct background_s {
        sfSprite *sprite;
        sfVector2f pos;
        int map;
    }background_t;

    typedef struct enemies_s {
        int *action_len;
        enemy_t **enemy;
    }enemies_t;

    typedef struct game_s {
        t_window *info;
        t_butts **buttons;
        background_t *background;
        sfTexture **texture;
        char ***maps;
        char **map;
        player_t *player;
        enemies_t *enemies;
        struct command_s *command;
        sfClock *frame_rate;
        int actual_map;
    }game_t;

    typedef struct key_command_s {
        sfKeyCode code;
        void(*func)(game_t *);
    }key_command_t;

    typedef struct mouse_command_s {
        sfMouseButton code;
        void(*func)(game_t *);
    }mouse_command_t;

    typedef struct command_s {
        key_command_t *key;
        mouse_command_t *mouse;
    }command_t;
#endif /* !STRUCTS_H_ */
