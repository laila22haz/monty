#include "monty.h"
/**
 * error_mod- Prints an error message and exits the program
 * @line: first
 * Return: void
 */
void error_mod(unsigned int line)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line);
	exit(EXIT_FAILURE);
}
