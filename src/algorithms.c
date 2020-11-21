/*
** EPITECH PROJECT, 2019
** algorithms
** File description:
** algorithms
*/

#include "../include/my.h"
#include "../include/push_swap.h"
#include <stdlib.h>

void basic_sort(int *list, int nb_num, int count, char **result)
{
    int memory = 0;
    int count_stack_2 = 0;

    for (int i = 0; i < nb_num - 1 - count; i++) {
        if (list[i] > list[i + 1]) {
            memory = list[i];
            list[i] = list[i + 1];
            list[i + 1] = memory;
            result[0] = my_pstrcat(result[0], "sa ");
        }
        if (is_sorted(list, 0, nb_num) != 0)
            break;
        result[0] = my_pstrcat(result[0], "pb ");
        count_stack_2++;
    }
    for (int j = 0; j < count_stack_2 - 1; j++)
        result[0] = my_pstrcat(result[0], "pa ");
    if (is_sorted(list, 0, nb_num) != 0)
        result[0] = my_pstrcat(result[0], "pa");
    else
        result[0] = my_pstrcat(result[0], "pa ");
}

int descending_sort(int *list, int nb_num, char **result)
{
    for (int i = 0; i < nb_num - 1; i++) {
        if (list[i] < list[i + 1])
            return 84;
    }
    for (int i = 0; i < nb_num - 2; i++) {
        result[0] = my_pstrcat(result[0], "rra ");
        result[0] = my_pstrcat(result[0], "pb ");
    }
    result[0] = my_pstrcat(result[0], "sa ");
    for (int i = 0; i < nb_num - 2; i++)
        result[0] = my_pstrcat(result[0], "sa ");
    return 0;
}