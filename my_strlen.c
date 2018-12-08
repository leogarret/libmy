/*
** EPITECH PROJECT, 2018
** Léo Garret (leogarret@hotmail.com)
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
