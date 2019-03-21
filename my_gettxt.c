char *my_gettxt(int nbr)
{
    char *str;
    int i = 0;

    str = malloc(sizeof(char) * 5);
    for (int c = 0; c <= 4; c++)
        str[c] = '\0';
    for (; nbr > 9; i++) {
        str[i] = (nbr % 10) + 48;
        nbr = nbr / 10;
    }
    str[i] = nbr + 48;
    str = my_revstr(str);
    return (str);
}
