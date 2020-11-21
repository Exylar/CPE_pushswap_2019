/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** push_swap
*/

#include "../include/my.h"
#include "../include/push_swap.h"
#include <stdlib.h>

int is_sorted(int *list, int start, int nb_num)
{
    for (int i = 0; i < nb_num - 1; i++) {
        if (list[i] > list[i + 1])
            return 0;
    }
    return 1;
}

int push_swap(int nb_num, int *list)
{
    int count = 0;
    char *result = malloc(sizeof(char) * 999999999);
    char *p_result = result;
    result[0] = '\0';

    descending_sort(list, nb_num, &result);
    while (is_sorted(list, 0, nb_num) == 0) {
        basic_sort(list, nb_num, count, &result);
        count++;
    }
    my_putstr(p_result);
    my_putstr("\n");
    free(p_result);
    exit(SUCESS);
}