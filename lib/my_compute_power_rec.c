/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** computes the power of the given parameter
*/

int my_compute_power_rec(int nb, int p)
{
    int result = 1;

    if (p == 0)
        return (1);
    for (int i = 0; i < p; i++) {
        result *= nb;
    }
    if (p < 0) {
        result = 1 / result;
    }
    return (result);
}
