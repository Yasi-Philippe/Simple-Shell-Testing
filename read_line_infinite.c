#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	size_t len;
	ssize_t nread;
	char *ptr;
	size_t i;

	while (1)
	{
		printf("$ ");
		nread = getline(&ptr, &len, stdin);
		if (!ptr)
			return (1);
		if (nread == -1)
		{
			free(ptr);
			return (0);
		}
		for (i = 0; i < nread; i++)
			putchar(ptr[i]);
	}
	free(ptr);
	return (0);
}
