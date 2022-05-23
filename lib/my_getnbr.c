/*
** EPITECH PROJECT, 2022
** LIBRARY
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int len = 0;
    int nb = 0;
    int sign = 1;

    while (str[len] != '\0') {
        if (str[len] == '-')
            sign = sign * -1;
        else if (str[len] >= '0' && str[len] <= '9') {
            nb = nb * 10;
            nb = nb + str[len] - '0';
        } else
            return (nb * sign);
        len++;
    }
    return (nb * sign);
}
