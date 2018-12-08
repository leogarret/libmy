/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my_strcat.c
*/

char *my_strcat(char *dest, char const *src)
{
    int len_src = my_strlen(src);
    int len_dest = my_strlen(dest);
    int i = len_dest;
    int isrc = 0;

    for (; i <= len_src + len_dest; i++, isrc++)
        dest[i] = src[isrc];
    dest[i] = '\0';
    return (dest);
}
