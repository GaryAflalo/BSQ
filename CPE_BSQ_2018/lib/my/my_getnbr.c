/*
** EPITECH PROJECT, 2018
** my_get_nbr.c
** File description:
** my_get_nbr.c
*/

#include "my.h"
int my_getnbr(char const *str)
{
    int i = 0;
    long long nbr = 0;
    int m = 1;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            m *= -1;
        i++;
    }
    while ((str[i] >= '0') && (str[i] <= '9')) {
        nbr = (nbr * 10) + (str[i] - 48);
        i++;
    }
    if (nbr > 2147483647 || nbr < -2147483648)
        return (0);
    else
        return (nbr * m);
}
