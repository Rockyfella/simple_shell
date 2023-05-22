#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

char *read_shell_line(void);
char **split_shell_line(char *line);
int execute_shell_command(char **args);

#endif
