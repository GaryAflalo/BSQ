/*
** EPITECH PROJECT, 2018
** my_strlenbsq
** File description:
** my_strlenbsq
*/

#include "my.h"
int first_nbr(char *str)
{
    if (my_getnbr(str) < 1)
        return 1;
    if (my_getnbr(str) < 10)
        return 2;
    if (my_getnbr(str) < 100)
        return 3;
    if (my_getnbr(str) < 1000)
        return 4;
    if (my_getnbr(str) < 10000)
        return 5;
    return '0';
}

int my_strlen_upline(char *str)
{
    int i = first_nbr(str);

    while (str[i] != '\n')
        i++;
    return (i - first_nbr(str));
}

int my_strlen_line(char *str)
{
    int i = 0;

    while (str[i] != '\n')
        i++;
    return (i + 1);
}

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
