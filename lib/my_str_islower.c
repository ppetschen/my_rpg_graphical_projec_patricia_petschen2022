/*
** EPITECH PROJECT, 2021
** my_str_isalpha.c
** File description:
** checks if str is in lower
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 'a' || str[i] > 'z') {
            return 0;
        }
        i++;
    }
    return 1;
}
