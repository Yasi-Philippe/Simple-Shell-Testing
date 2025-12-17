#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void)
{
	char str[] = "Hello there, how  you doin?";
	char *sep = " ,.-!";
	char *token;

	token = strtok(str, sep);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok (NULL, sep);
	}
	return (0);
}
