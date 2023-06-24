#include "monty.h"
/**
 * error_div- Prints an error message and exits the program
 * @line: The line number where the error occurred
 * Return: void
 */
void error_div(unsigned int line)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * error_div_zero- Prints an error message and exits the program
 * @line: The line number where the error occurred
 * Return: void
 */
void error_div_zero(unsigned int line)
{
	fprintf(stderr, "L%u: division by zero\n", line);
	exit(EXIT_FAILURE);
}
