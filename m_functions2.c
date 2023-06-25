#include "monty.h"

/**
 * _mod - computes the rest of the division of
 * the second top element of the stack by the top element of the stack.
 * @stack: first argument
 * @line_number: second argument
 * Return: VOID
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	int mod = 0;

	if (*stack == NULL || (*stack)->next == NULL)
		error_mod(line_number);
	if ((*stack)->n == 0)
		error_div_zero(line_number);
	mod = (((*stack)->next)->n) % ((*stack)->n);
	_pop(stack, line_number);
	(*stack)->n = mod;
}
/**
 * _pchar - prints the char at the top of the stack.
 * @stack: linked list's stack address.
 * @line_number: line number from file.
 * Return: nothing
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
/**
 * _pstr -  prints the string starting at the top of the stack
 * @stack: linked list's stack address
 * @line_number: line number from file.
 * Return: nothing
*/
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = (*stack);
	(void) line_number;

	while (temp)
	{
		if (temp->n <= 0 || temp->n > 127)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}

