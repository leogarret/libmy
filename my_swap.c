/*
** EPITECH PROJECT, 2018
** Made by Léo Garret (leogarret@hotmail.com)
** File description:
** my_swap.c
*/

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
