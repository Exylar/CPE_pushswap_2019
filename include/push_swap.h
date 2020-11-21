/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** push_swap
*/

#define SUCESS 0
#define ERROR 84

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

int push_swap(int nb_num, int *list);
void split_in_twice(int *list, int nb_num, char **result);
int descending_sort(int *list, int nb_num, char **result);
void basic_sort(int *list, int nb_num, int count, char **result);
int is_sorted(int *list, int start, int nb_num);

#endif
