#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int my_strlen(char *str)
{
    int count = -1;

    while (str[++count]);
    return (count);
}

int number_of_elements(char *str, char sep)
{
    int count = 1;

    for (int i = 0; str[i]; ++i) {
        if (str[i] == sep)
            ++count;
    }
    return (count);
}

int my_strlen_start(char *str, int count, char sep)
{
    int nb = 0;
    int size = 0;
    int i = 0;

    for (; str[i] && nb <= count; ++i)
        if (str[i] == sep)
            ++nb;
    for (; str[i] != sep && str[i]; ++i, ++size);
    return (size);
}

void put_at(char *str, int index, char **array, char sep)
{
    int count = 0;
    int c = 0;

    for (int i = 0; str[i]; ++i) {
        if (count == index) {
            for (c = 0; str[i] != sep && str[i]; ++i, ++c)
                array[index][c] = str[i];
            array[index][++c] = '\0';
            break;
        } else if (str[i] == sep)
            ++count;
    }
}

char **my_str_to_word_array(char *str, char sep)
{
    int size = number_of_elements(str, sep);
    char **word_array = malloc(sizeof(char *) * size + 1);
    int c = 0;

    for (int i = 0; i < size; ++i)
        word_array[i] = malloc(sizeof(char) * my_strlen_start(str, i, sep) + 1);
    for (c = 0; c < size; ++c)
        put_at(str, c, word_array, sep);
    word_array[++c] = NULL;
    return (word_array);
}

int main(void)
{
    char **arr = my_str_to_word_array("** vvvvv *************** $$$$$$$$$$$$$$$$$", ' ');

    for (int i = 0; arr[i]; ++i)
        puts(arr[i]);
    return (0);
}
