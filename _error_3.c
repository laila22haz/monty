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
/**
 * error_mul- Prints an error message and exits the program
 * @line: The line number where the error occurred
 * Return: void
 */
void error_mul(unsigned int line)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * error_pchar- Prints an error message and exits the program
 * @line: first
 * Return: void
 */
void error_pchar(unsigned int line)
{
	fprintf(stderr, "L%u:can't pchar, stack empty\n", line);
	exit(EXIT_FAILURE);
}
/**
 * error_pchar_range - Prints an error message and exits the program
 * @line: first
 * Return: void
 */
void error_pchar_range(unsigned int line)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line);
	exit(EXIT_FAILURE);

}
