/*
** EPITECH PROJECT, 2018
** algo.c
** File description:
** algo.c
*/

#include "my.h"

char *ret(char *buffer)
{
    int i = my_strlen_line(buffer);

    while (buffer[i]) {
        if (buffer[i] != 'x' && buffer[i] != 'o'
            && buffer[i] != '\n' && buffer[i])
            buffer[i] = '.';
        i++;
    }
    if (buffer[my_strlen_line(buffer)] == '.' && my_getnbr(buffer) == 0
	|| my_strlen_upline(buffer) == 1 && my_getnbr(buffer) == 1)
        buffer[my_strlen_line(buffer)] = 'x';
    return (buffer);
}

char *replace(char *buffer, int j, char *max)
{
    int a = max - 48;
    int b = max - 48;
    
    while (b != 0) {
        buffer[j] = 'x';
        j--;
        a--;
        if (a == 0) {
            a = max - 48;
            b--;
            j = (j - my_strlen_upline(buffer) - 1 + a);
        }
    }
    return (ret(buffer));
}

char maxnbr(char *buffer, int *j)
{
    int i = my_strlen_line(buffer);
    char max = '1';
    
    while (buffer[i]) {
        if (buffer[i] > max && buffer[i] != 'o') {
            max = buffer[i];
            *j = i;
        }
        i++;
    }
    return (max);
}

char	*demineur(char *buffer)
{
    int i = my_strlen_upline(buffer);
    int j = 0;
    char max;
    
    while (buffer[i]) {
        if (buffer[i] == '.' && buffer[i - 1] != 'o' && buffer[i - 1] != '\n'
            && buffer[i - my_strlen_upline(buffer) - 1] != 'o'
            && buffer[i - my_strlen_upline(buffer) - 1] != '\n'
            && buffer[i - my_strlen_upline(buffer) - 2] != 'o'
            && buffer[i - my_strlen_upline(buffer) - 2] != '\n')
            buffer[i] = calc(buffer[i - 1],buffer[i - my_strlen_upline(buffer) - 1],
            buffer[i - my_strlen_upline(buffer) - 2]) + 1;
        else if (buffer[i] == '.')
            buffer[i] = '1';
        i++;
    }
    max = maxnbr(buffer, &j);
    buffer = replace(buffer, j, max);
    return (buffer);
}

char *one_and_zero(char *buffer)
{
    int i = my_strlen_line(buffer);
    
    while (buffer[i] != '\n' && buffer[i]) {
        if (buffer[i] == '.')
            buffer[i] = '1';
        i++;
    }
    while (buffer[i]) {
        if (buffer[i] == 'o' && buffer[i + 1] == '.')
            buffer[i + 1] = '1';
        if (buffer[i] == 'o' && buffer[i + 1 + my_strlen_upline(buffer)] == '.')
            buffer[i + 1 + my_strlen_upline(buffer)] = '1';
        if (buffer[i] == 'o' && buffer[i + 2 + my_strlen_upline(buffer)] == '.')
            buffer[i + 2 + my_strlen_upline(buffer)] = '1';
        i++;
    }
    return (buffer = demineur(buffer));
}
