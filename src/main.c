/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "../include/my.h"
#include "../include/push_swap.h"
#include <stdlib.h>

void verif_intput_nbr(int argc, char **argv)
{
    if (argc < 2)
        exit(SUCESS);
    for (int i = 1; i < argc; i++) {
        if (my_str_isnum(argv[i]) == 0) {
            my_putstr("\n");
            exit(ERROR);
        }
    }
}

int input_already_sort(int argc, char **argv)
{
    int memory = my_atoi(argv[1]);
    int sort = 1;

    for (int i = 1; i < argc; i++) {
        if (memory > my_atoi(argv[i]))
            return 0;
        memory = my_atoi(argv[i]);
    }
    my_putstr("\n");
    exit(SUCESS);
}

void fill_list(int argc, char **argv, int *list)
{
    for (int i = 1; i < argc; i++)
        list[i - 1] = my_atoi(argv[i]);
}

void main(int argc, char **argv)
{
    int list[argc - 2];

    verif_intput_nbr(argc, argv);
    input_already_sort(argc, argv);
    fill_list(argc, argv, list);
    push_swap(argc - 1, list);
    exit(SUCESS);
}