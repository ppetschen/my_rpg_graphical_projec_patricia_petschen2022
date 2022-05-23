/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** passes a string in an array of strings
*/

#include <stdlib.h>
#include <stdio.h>

int count_words(char const *str, char sep)
{
    int words = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == sep)
            words++;
        i++;
    }
    return words + 1;
}

char *save_word(char *str, int ini, int len)
{
    char *word = malloc(len + 1);
    int i = 0;

    word[len] = '\0';
    while (i < len) {
        word[i] = str[ini + i];
        i++;
    }
    return word;
}

char **my_str_to_word_array(char *str, char sep)
{
    int len_arr = count_words(str, sep);
    char **array = malloc(sizeof(char *) * (len_arr + 1));
    int len = 0;
    int i = 0;
    int e = 0;

    array[len_arr] = NULL;
    while (str[i] != '\0') {
        if (str[i] == sep) {
            array[e] = save_word(str, i - len, len);
            e++;
            len = 0;
        } else
            len++;
        i++;
    }
    array[e] = save_word(str, i - len, len);
    return array;
}
