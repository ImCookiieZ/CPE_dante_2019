/*
** EPITECH PROJECT, 2020
** generator
** File description:
** error.c
*/

#include "../include/all_includes.h"

void my_put_error_str(char *str)
{
    int i = 0;
    my_putstr("\033[0;31m");
    for (i = 0; str[i]; i++);
    write(2, str, i);
    my_putstr("\033[0m");
}

void my_error_exit(char *error_msg)
{
    my_put_error_str(error_msg);
    exit(84);
}