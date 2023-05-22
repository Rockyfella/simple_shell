#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: the number of command-line arguments
 * @av: an array of pointers to the command-line arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *av[])
{
	while (*av)
		write("%s\n", av++);

	return (0);
}
