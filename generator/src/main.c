/*
** EPITECH PROJECT, 2020
** add_project_name
** File description:
** main.c
*/

#include "../include/all_includes.h"

head_t *create_stack(void)
{
    head_t *stack = malloc(sizeof(head_t));

    if (!(stack))
        my_error_exit("malloc failed in first allocation for function\n");
    stack->start = NULL;
    stack->last = NULL;
    return (stack);
}

coord_t *create_co(void)
{
    coord_t *co = malloc(sizeof(coord_t));

    co->y = 0;
    co->x = 0;
    return (co);
}

void my_error(int ac, char **av)
{
    if (!(my_str_isnum(av[1]) && my_getnbr(av[1]) >= 1))
        my_error_exit("first argument is not a number\n");
    if (!(my_str_isnum(av[2]) && my_getnbr(av[2]) >= 1))
        my_error_exit("secund argument is not a number\n");
}

int main(int ac, char **av)
{
    srand(time(NULL));
    if (ac < 3 || ac > 4)
        my_error_exit("wrong number of arguments\n");
    my_error(ac, av);
    if (ac == 4 && (my_strcmp(av[3], "[perfect]") == 0 || my_strcmp(av[3],
        "perfect") == 0))
        do_perfect_dfa(my_getnbr(av[1]), my_getnbr(av[2]), TRUE);
    else
        do_perfect_dfa(my_getnbr(av[1]), my_getnbr(av[2]), FALSE);
    return (0);
}