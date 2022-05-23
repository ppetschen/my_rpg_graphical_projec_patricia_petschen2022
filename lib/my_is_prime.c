/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** returns 1 if the number is prime and 0 if not
*/

int my_is_prime(int nb)
{
    int resto = 0;
    int i = 2;

    while (i <= nb / 2) {
        resto = nb % i;
        if (resto == 0) {
            return (0);
        }
        i++;
    }
    return (1);
}
