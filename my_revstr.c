/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my_revstr.c
*/

char *my_revstr(char *str)
{
    int nb_str = my_strlen(str) - 1;
    int temp = my_strlen(str) - 1;

    for (int i = 0; i <= (temp / 2); i++, nb_str--) 
	    my_swap(&str[i], &str[nb_str]);
    return (str);
}
