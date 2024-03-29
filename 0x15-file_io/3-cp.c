#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, err_close;
    ssize_t nchars, nwr;
    char buf[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (file_from == -1 || file_to == -1)
    {
        if (file_from == -1)
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        else
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(98);
    }

    while ((nchars = read(file_from, buf, 1024)) > 0)
    {
        nwr = write(file_to, buf, nchars);
        if (nwr == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    if (nchars == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    err_close = close(file_from);
    if (err_close == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }

    err_close = close(file_to);
    if (err_close == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }

    return (0);
}

