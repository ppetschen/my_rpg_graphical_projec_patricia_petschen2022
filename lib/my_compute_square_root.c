/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** square root
*/


int  my_compute_square_root(int nb)
{
    int res = 0;
    int i = 1;

    while (i <= nb / 2){
        res = nb / i;
        if (res == i){
            return (res);
        }
        i++;
    }
    return (0);
}
