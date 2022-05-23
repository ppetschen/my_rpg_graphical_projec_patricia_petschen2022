/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** func_ptr
*/

#ifndef FUNC_PTR_H_
#define FUNC_PTR_H_

typedef struct s_handler {
    char *identifier;
    void (*fn_ptr)();
} handler_t;

extern handler_t handlers[];

#endif /* !FUNC_PTR_H_ */
