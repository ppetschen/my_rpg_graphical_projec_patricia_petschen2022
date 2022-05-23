/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** finds the smallest prime int
*/

#include "../include/my.h"
#include <limits.h>

int my_find_prime_sup (int nb)
{
    int i = nb;

    if (nb <= 1)
        return (0);
    while (i <= INT_MAX) {
        if (my_is_prime(i) == 1) {
            return (i);
        }
        i++;
    }
    return (0);
}
