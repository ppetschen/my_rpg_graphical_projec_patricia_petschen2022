/*
** EPITECH PROJECT, 2022
** functions.h
** File description:
** functions
*/

#ifndef FUNCTIONS_H_
    #define FUNCTIONS_H_

    #include "csfml.h"
    #include "structs.h"

    //window
    sfRenderWindow *create_window(char *name);
    t_window *malloc_wd_struct(char *wd_name);
    void free_wd_struct(t_window *wd);
    sfText *write_text(sfFont *font, char *str, sfVector2f pos, int size);
    sfSprite *create_sprite(char *filepath, int x, int y);

    // music and sounds
    sounds_t *init_sounds(void);
    void load_music(t_window *wd);
    void free_sounds_struct(sounds_t *sounds);

    //butts
    void get_vectors(char **line_arr, t_butts *button);
    int buttons_array_len(t_butts **buttons);
    t_butts **get_buttons(char *file_path);
    void free_buttons_array(t_butts **buttons);
    void free_buttons_struct(t_butts *buttons);
    t_butts **scn_changes(t_butts **buttons, t_window *win);

    //events
    void check_events(t_window *window, t_butts **buttons);

    //handlers.h
    void handle_null(t_window *win);
    void handle_quit(t_window *win);
    void handle_play(t_window *win);
    void handle_menu(t_window *win);
    void handle_settings(t_window *win);
    void handle_prev(t_window *win);
    void handle_music(t_window *win);
    void handle_sounds(t_window *win);
    void handle_on(t_window *win);
    void handle_off(t_window *win);
    void handle_controls(t_window *win);
    void handle_main_menu(t_window *win);
    void handle_sword00(t_window *win);
    void handle_sword01(t_window *win);
    void handle_sword02(t_window *win);
    void handle_sword03(t_window *win);
    void handle_sword04(t_window *win);
    void handle_sword05(t_window *win);

    //game.c
    int exc_game(game_t *game);

    //init_game.c
    game_t *init_game(t_window *info, t_butts **buttons);

    //init_texture.c
    sfTexture **init_texture(void);

    //init_window.c
    sfRenderWindow *init_window(void);

    //init_map.c
    char **init_map(char *pathfile);

    //init_action_len.c
    int *enemy_action_len(void);
    int *player_action_len(void);

    //init_player.c
    sfSprite *init_sprite(sfTexture *texture);
    player_t *init_player(sfTexture *texture);

    //init_enemies.c
    enemies_t *init_enemies(char ***maps, sfTexture *texture);

    //init_commands.c
    command_t *init_commands(void);

    //set_variables.c
    sfVector2f set_pos(int x, int y);
    sfIntRect set_rect(int left, int width, int top, int height);
    sfVector2i get_index(sfVector2f pos);
    sfVector2i set_index(int x, int y);

    //handle_event.c
    void handle_event(game_t *game);

    //move_player.c
    void left(game_t *game);
    void right(game_t *game);
    void up(game_t *game);
    void down(game_t *game);
    void idle(player_t *player);

    //move_sprites.c
    void move_sprites(game_t *game);

    //move_player_sprite.c
    void move_player_sprite(game_t *game);

    //can_move_map.c
    int can_move_map_left(game_t *game);
    int can_move_map_right(game_t *game);
    int can_move_map_up(game_t *game);
    int can_move_map_down(game_t *game);

    //enemy_still.c
    void enemy_still_left(enemy_t *enemy);
    void enemy_still_right(enemy_t *enemy);
    void enemy_still_up(enemy_t *enemy);
    void enemy_still_down(enemy_t *enemy);

    //move_mousec.c
    void attack(game_t *game);
    void block(game_t *game);

    //is_collision.c
    int is_collision_left(game_t *game);
    int is_collision_right(game_t *game);
    int is_collision_up(game_t *game);
    int is_collision_down(game_t *game);

    //change_sprite.c
    void change_sprites(game_t *game);

    //change_sprite_player.c
    void change_sprite_player(player_t *player);

    //change_sprite_enemy.c
    void change_sprite_enemy(enemy_t *enemy, int *action_len);

    //check_hit.c
    void check_hit_player(game_t *game);

    //change_map.c
    void detect_change_map(game_t *game);
    void change_background(game_t *game, int map);

    //load_map.c
    void load_map_a(game_t *game);
    void load_map_b(game_t *game);
    void load_map_c(game_t *game);
    void load_map_d(game_t *game);
    void load_map_e(game_t *game);

    //enemy_attack
    void enemy_direction(sfVector2i ind, enemy_t *enemy);

    //enemy_attack.c
    void check_enemy_attack(enemy_t *enemy, sfVector2i ind);

    //display.c
    void display(game_t *game);
#endif /* !FUNCTIONS_H_ */
