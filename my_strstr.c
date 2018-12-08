/*
** EPITECH PROJECT, 2018
** Léo Garret (leogarret@hotmail.com)
** File description:
** my_strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int f = 0;

    while (str[i] != '\0') {
        if (str[i] == to_find[f]) {
            while (str[i] == to_find[f] && to_find[f] != '\0') {
                i++;
                f++;
            }
            if (to_find[f] == '\0') {
                i -= f;
                return ((char *)&str[i]);
            }
        }
        i -= f;
        f = 0;
        i++;
    }
    return ("");
}
