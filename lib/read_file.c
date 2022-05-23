/*
** EPITECH PROJECT, 2022
** save_file_str.c
** File description:
** saves the text of a file in a string
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char *read_file(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat statbuf;
    char *buf;

    if (fd == -1)
        return (NULL);
    if (stat(filepath, &statbuf) == -1)
        return (NULL);
    buf = malloc(statbuf.st_size + 1);
    if (buf == NULL)
        return (NULL);
    int rd = read(fd, buf, statbuf.st_size);
    buf[rd] = '\0';
    close(fd);
    return (buf);
}
