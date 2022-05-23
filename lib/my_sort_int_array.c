/*
** EPITECH PROJECT, 2021
** my_sort_int_array.c
** File description:
** prints the integers in ascendent order
*/

void my_sort_int_array(int *tab, int size)
{
    int temp = 0;

    if (size < 2)
        return;
    for (int i = 0; i < size - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
    }
}
