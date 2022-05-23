/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** compares two strings n bytes
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i < n && s1[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return -1;
    }
    return 1;
}
