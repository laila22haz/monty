#include "monty.h"

/**
 * _pop - function that removes the top element of the stack
 * @stack: the first argument
 * @line_number: the second argument
 *
 * Return: VOID
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	if (*stack == NULL)
		error_pop(line_number);
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		tmp = *stack;
		((*stack)->next)->prev = NULL;
		(*stack) = (*stack)->next;
		free(tmp);
	}

}
