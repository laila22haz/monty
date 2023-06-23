#include "monty.h"

/**
 * _hundale_push - function that hundale _push error
 * @line: the first argument
 *
 * Return: Void
 */
void _hundale_push(unsigned int line)
{
	if (!isdigit(line))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line);
		exit(EXIT_FAILURE);
	}
}

/**
 * malloc_error - function that display the memory error
 *
 * Return: VOID
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
/**
 * argument_error - funtion that hudale the argument error
 *
 * Return: VOID
 */
void argument_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * file_error - hundale the file error
 * @argv: argument
 * Return: VOID
 */
void file_error(char **argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
}
