#include <stdio.h>
#include <stdlib.h>
/**
 * main - Show how many coins you need to make the money you put
 * @argc: Arguments count
 * @argv: Pointer to strings
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	int l = 0;

	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	if (i <= 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (j = 0; j < 5; j++)
		{
			k = i / c[j];
			i = i - k * c[j];
			l = l + k;
			if (i == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", l);
	return (0);
}
