/*
** EPITECH PROJECT, 2018
** Léo Garret (leogarret@hotmail.com)
** File description:
** my_putnbr.c
*/

int my_put_nbr(int b)
{
    if (b == -2147483648) {
	    my_putchar('-');
	    my_putchar('2');
	    b = 147483648;
	  }
    if (b < 0) {
	    my_putchar('-');
	    my_put_nbr(-b);
	    return (0);
	  }
    if (b < 10) {
	    my_putchar('0' + b);
	    return (0);
	  }
    my_put_nbr(b / 10);
    my_putchar('0' + b % 10);
    return (0);
}
