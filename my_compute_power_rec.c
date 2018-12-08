/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int p)
{
    int result = nb;

    if (p == 0)
	    return (1);
    else if (p < 0)
	    return (0);
    else if (p > 0)
	    result = result * my_compute_power_rec(nb, p - 1);
    return (result);
}
