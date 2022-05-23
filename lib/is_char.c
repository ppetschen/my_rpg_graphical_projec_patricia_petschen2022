/*
** EPITECH PROJECT, 2022
** is_char.c
** File description:
** is_char
*/

int is_char(char c)
{
    if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
        return (1);
    else
        return (0);
}
