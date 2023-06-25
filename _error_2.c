#include "monty.h"
/**
 * error_pop - Prints an error message and exits the program
 * @line: The line number where the error occurred
 * Return: void
 */
void error_pop(unsigned int line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}
/**
 * error_add - Prints an error message and exits the program
 * @line: The line number where the error occurred
 * Return: void
 */
void error_add(unsigned int line)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * error_sub - Prints an error message and exits the program
 * @line: The line number where the error occurred
 * Return: void
 */
void error_sub(unsigned int line)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line);
	exit(EXIT_FAILURE);
}
