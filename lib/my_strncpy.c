/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** copies n characters from a string into another
*/

char *my_strncpy(char *dest , char const *src , int n)
{
    int i = 0;

    while (i < n) {
        if (*src == '\0') {
            *dest = '\0';
            return dest;
        } else {
            *dest = *src;
            dest++;
            src++;
            i++;
        }
    }
}
