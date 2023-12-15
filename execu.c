#include "head.h"

/**
 * e_command - Executes a command.
 * @command: An array of strings representing the command and its arguments.
 * @argv: An array of strings representing the program arguments.
 *
 * Return: Returns the exit status of the executed command.
 */
int e_command(char **cmd, char **argv) {
    pid_t child;
    int status;
	char **s_env = NULL;

    child = fork();
    if (child == 0) {
        if (execve(cmd[0], cmd, s_env) == -1) {
            perror(argv[0]);
            f_2d_array(&cmd);
            _exit(EXIT_FAILURE);
        }
    } else {
        waitpid(child, &status, 0);
        f_2d_array(&cmd);
    }
 	return (WEXITSTATUS(status));
}
