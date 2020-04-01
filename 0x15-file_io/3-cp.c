#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * main - copies the content of a file to another file
 * @argc: count arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, destiny, i, k;
	char buff[1024];
	ssize_t r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp from destiny\n");
		exit(97);
	}
	for (i = 0; i < 1024; i++)
		buff[i] = 0;
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	destiny = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destiny == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]);
		exit(99);
	}
	r = read(from, buff, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	while (r)
	{
		w = write(destiny, buff, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			exit(99);
		}

		r = read(from, buff, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	k = close(from);
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	k = close(destiny);
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destiny);
		exit(100);
	}
	return (0);
}