/*
** EPITECH PROJECT, 2018
** Made by Léo Garret (leogarret@hotmail.com)
** File description:
** my_putchar.c
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}
