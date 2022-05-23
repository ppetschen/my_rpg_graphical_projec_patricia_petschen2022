/*
** EPITECH PROJECT, 2021
** my_str_isalpha.c
** File description:
** checks if str is only nb
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
        i++;
    }
    return 1;
}
