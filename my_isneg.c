/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my_isneg.c
*/

void my_isneg(int n)
{
    if (n >= 0)
	    my_putchar('P');
    else if (n < 0)
	    my_putchar('N');
}
