##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makes the file
##

NAME	=	libmy.a

SRC	=	my_putchar.c				\
		my_isneg.c					\
		my_put_nbr.c				\
		my_swap.c					\
		my_putstr.c					\
		my_strlen.c					\
		my_getnbr.c					\
		my_sort_int_array.c			\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_is_prime.c				\
		my_find_prime_sup.c			\
		my_strcpy.c					\
		my_strncpy.c				\
		my_revstr.c					\
		my_strstr.c					\
		my_strcmp.c					\
		my_strncmp.c				\
		my_strupcase.c				\
		my_strlowcase.c				\
		my_strcapitalize.c			\
		my_str_isalpha.c			\
		my_str_isnum.c				\
		my_str_islower.c			\
		my_str_isupper.c			\
		my_str_isprintable.c		\
		my_str_to_word_array.c		\
		my_showstr.c				\
		my_showmem.c				\
		my_strcat.c					\
		my_strncat.c				\
		my_get_substr.c				\
		count_lines_array.c			\
		print_array.c				\
		my_remalloc_array.c			\
		read_file.c					\
		my_get_line.c				\
		free_array_str.c			\
		my_strdup.c					\
		is_char.c					\
		count_lines_array.c			\
		my_arraylen.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		clean all
