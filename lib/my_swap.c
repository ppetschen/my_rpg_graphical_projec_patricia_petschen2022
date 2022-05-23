/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** swaps the content of two integers
*/

void my_swap(int *a, int *b)
{
    int t = *a;

    *a = *b;
    *b = t;
}
