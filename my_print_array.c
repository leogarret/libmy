/*
** EPITECH PROJECT, 2018
** Made by Léo Garret (leogarret@hotmail.com)
** File description:
** my_print_array.c
*/

void my_print_array(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        my_put_nbr(array[i]);
    	my_putchar(' ');
    }
    my_putchar('\n');
}
