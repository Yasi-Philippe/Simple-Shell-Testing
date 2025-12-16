#include <stdio.h>

int main(int ac, char **av)
{
	int i = 1, j;

	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			putchar(av[i][j]);
			j++;
		}
		i++;
		putchar('\n');
	}
	return (0);
}