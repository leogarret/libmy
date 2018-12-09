/*
** EPITECH PROJECT, 2018
** Made by Léo Garret (leogarret@hotmail.com)
** File description:
** my_getnbr.c
*/

int my_getnbr(char *str)
{
    int result = 0;
    int neg = (*str == '-') ? 1 && str++ : 0;

    for (; *str; str++)
        result = (result * 10) + (*str - 48);
    return (neg ? -result : result);
}
