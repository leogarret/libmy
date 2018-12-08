/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** swap two values
*/

void my_swap(int *a, int *b)
{
    int temp = *a;
    int temp2 = *b;
    
    *a = temp2;
    *b = temp;
}
