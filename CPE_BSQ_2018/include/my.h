/*
** EPITECH PROJECT, 2018
** my.hbsq
** File description:
** my.hbsq
*/


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char calc(char s1, char s2, char s3);
char *one_and_zero(char *buffer);
char *first_number(char *buffer);

int my_strlen(char *str);
int my_strlen_line(char *str);
int my_strlen_upline(char *str);

int my_getnbr(char const *str);
int my_putstr(char const *str);
void my_putchar(char);
void test_argv(int);
void find_file(int);
void test_file(char*);
char *test_char(char *buffer);
void empty_file(char);
