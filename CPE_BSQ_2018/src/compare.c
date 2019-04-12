/*
** EPITECH PROJECT, 2018
** compare.c
** File description:
** compare.c
*/
#include "my.h"
char *first_number(char *buffer)
{
    int i = my_strlen_line(buffer);
    int j = 0;
    char *first = malloc(sizeof(char*) * my_strlen(buffer) + 1);
    
    while (buffer[i]) {
        first[j] = buffer[i];
        j++;
        i++;
    }
    return (first);
}

char calc(char s1, char s2, char s3)
{
    if (s1 <= s2 && s1 <= s3)
        return s1;
        else if (s2 <= s1 && s2 <= s3)
            return s2;
            else if (s3 <= s1 && s3 <= s2)
                return s3;
                else
                    return '0';
}
