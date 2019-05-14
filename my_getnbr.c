/*
** EPITECH PROJECT, 2018
** Made by Léo Garret (leogarret@hotmail.com)
** File description:
** my_getnbr.c
*/

int my_getnbr(char *str)
{
    int tab[2] = {0, *str == '-' ? 1 && str++ : 0};

    while (*str && (*tab = (*tab * 10) + (*str++ - 48)));
    return (tab[1] ? -(*tab) : *tab);
}
