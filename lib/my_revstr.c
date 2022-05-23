/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** reverses a string
*/

char *my_revstr(char *str)
{
    int i = 0;
    int n = 0;
    char t;

    while (str[n] != '\0') {
        n++;
    }
    while (i < n / 2) {
        t = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = t;
        i++;
    }
    str[n] = '\0';
    return str;
}
