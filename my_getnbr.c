/*
** EPITECH PROJECT, 2018
** Made by Léo Garret (leogarret@hotmail.com)
** File description:
** my_getnbr.c
*/

int my_getnbr(char *str)
{
    int result = 0;
    int neg = 0;

    if (str[0] == '-') {
        str++;
        neg = 1;
    }
    for (int i = 0; str[i]; i++) {
        result *= 10;
        result += (str[i] - 48);
    }
    if (neg == 1)
        return (result * -1);
    return (result);
}
