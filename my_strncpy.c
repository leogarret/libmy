/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my_strncpy.c
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; i != n; i++)
	    dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
