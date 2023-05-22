#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char *buffer;
	size_t bufsize = BUFFER_SIZE;
	size_t characters;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	write(" > ", 3);
	characters = getline(&buffer, &bufsize, stdin);
	write(STDOUT_FILENO, " characters were read.\n", 23);
	write(STDOUT_FILENO, "You typed: '", 12);
	write(STDOUT_FILENO, buffer, characters);
	write(STDOUT_FILENO, "'\n", 2);

	free(buffer);
	return (0);
}
