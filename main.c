#include "head.h"

/**
 * main - The main function for the simple shell.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: Returns the exit status.
 *
 * Description: If the argument count is incorrect - exit code 97.
 */
int main(int argc, char **argv)
{

	char *input = NULL, **cmd = NULL;
	int status = 0;
	(void)argc;

	while (1)
	{
		input = r_input();
		if (input == NULL)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		return (status);
	}

	cmd = t_input(input);
	if (!cmd)
		continue;
	f_2d_array(&cmd);
	status = e_command(cmd, argv);
	}
}
