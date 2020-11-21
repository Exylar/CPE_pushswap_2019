/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_pstrcat
*/

int my_strlen(char const *str);

char *my_pstrcat(char *dest, char const *src)
{
    int i = 0;

    for (i = 0; src[i]; i++) {
        dest[0] = src[i];
        dest++;
    }
    dest[0] = '\0';
    return dest;
}