/*
** EPITECH PROJECT, 2021
** my_strupcase.c
** File description:
** changes a string into upper
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}
