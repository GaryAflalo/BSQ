/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "my.h"
int main(int ac , char **av)
{
    test_argv(ac);
    int fd = open(av[1], O_RDONLY);
    struct stat size;
    char *buffer;
        
    if (stat(av[1], &size) == -1)
        return (84);
    buffer = malloc(sizeof(char *) * size.st_size);
    if (fd == -1) {
        my_putstr("Error to open\n");
        return (1);
    }
    read(fd, buffer, size.st_size + 1);
    test_char(buffer);
    buffer[size.st_size] = 0;
    buffer = one_and_zero(buffer);
    buffer = first_number(buffer);
    my_putstr(buffer);
    close(fd);
    free(buffer);
    return (0);
}

void test_argv(int ac)
{
    if (ac != 2) {
        write(2 , "Error arguments n", 15);
        exit(84);
    }
}

char *test_char(char *buffer)
{
    int i = first_nbr(buffer)+1;
    while (buffer[i]) {
        i++;
        if (buffer[i] != '.' && buffer[i] != 'o' && buffer[i] != '\n' && buffer[i] != '\0') {
            write(2, "Fichier eronné\n", 16);
            write(2, "./bsq [map]\n", 13);
            exit(84);
        }
    }
}
