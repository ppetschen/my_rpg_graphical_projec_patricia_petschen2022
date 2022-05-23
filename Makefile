##
## EPITECH PROJECT, 2022
## makefile
## File description:
## creates the executable
##

NAME	=	my_rpg

SRC	=	src/main.c						\
		src/events.c 					\
		src/window/csfml_objects.c 		\
		src/window/write_text.c			\
		src/window/malloc_wd_struct.c	\
		src/window/free_window.c		\
		src/window/change_map_path.c	\
		src/butts/buttons_array_len.c	\
		src/butts/free_buttons.c		\
		src/butt_handlers/handlers.c	\
		src/butt_handlers/handlers_01.c	\
		src/butt_handlers/handlers_02.c	\
		src/butt_handlers/handlers_03.c	\
		src/butt_handlers/handlers_04.c	\
		src/butts/init_button.c			\
		src/butts/get_vectors.c			\
		src/music/init_sounds.c 		\
		src/music/load_music.c			\
		src/music/free_sounds_struct.c	\
		src/exc_game.c					\
		src/init/init_game.c			\
		src/init/init_texture.c			\
		src/init/init_map.c				\
		src/init/init_action_len.c		\
		src/init/init_player.c			\
		src/init/init_enemies.c			\
		src/init/init_commands.c		\
		src/init/init_window.c			\
		src/set_variables.c				\
		src/handle_event.c				\
		src/move/move_player.c			\
		src/move/move_sprites.c			\
		src/move/move_player_sprite.c	\
		src/move/can_move_map.c			\
		src/move/enemy_still.c			\
		src/move/move_mouse.c			\
		src/move/is_collision.c			\
		src/move/change_sprite.c		\
		src/move/change_sprite_player.c	\
		src/move/change_sprite_enemy.c	\
		src/move/check_hit.c			\
		src/change_map.c				\
		src/load_map.c					\
		src/enemy_direction.c			\
		src/enemy_attack.c				\
		src/display.c

OBJ	=	$(SRC:.c=.o)

LIB_DIR	=	lib

LIB	=	-L$(LIB_DIR) -lmy

CSFML	=	-lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

CFLAGS	=	-I./include -W -Wextra -Werror -Wall

all:	$(NAME)

$(NAME):	$(OBJ)
	cd lib; $(MAKE) -f Makefile
	gcc -o $(NAME) $(SRC) $(LIB) $(CFLAGS) $(CSFML)

clean:
	rm -f $(OBJ)
	cd $(LIB_DIR) ; $(MAKE) -f Makefile clean

fclean: clean
	rm -f $(NAME)
	cd $(LIB_DIR) ; $(MAKE) -f Makefile fclean

re:	fclean all;
