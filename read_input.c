#include "head.h"

/**
 * r_input - Reads a line of input from the user.
 *
 * Return: Returns the input line as a string.
 */
char *r_input(void)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t n;

	write(STDOUT_FILENO, "$ ", 2);

	if ((n == getline(&input, &len, stdin)) == -1)
	{
	perror("getline");
	return (NULL);
	}

	if (n > 0 && input[n - 1] == '\n')
	{
		input[--n] = '\0';
	}

	return (input);
}
