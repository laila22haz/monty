#include "monty.h"

/**
 *
 *
 *
 */
void error_pop(unsigned int line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}
