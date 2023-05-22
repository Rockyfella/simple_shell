#include "shell.h"
#include <unistd.h>
#include <stdlib.h>

/**
  * main - An entry function
  * Return: Nothing
*/

int main(void)
{
	char *line;
	char **args;
	int status;

	do {
		write(1, "> ", 2);
		line = read_shell_line();
		args = split_shell_line(line);
		status = execute_shell_command(args);
		free(line);
		free(args);
	} while (status);

	return (EXIT_SUCCESS);
}
