#include "monty.h"

/**
 * _push - function that  pushes an element to the stack
 * @stack: first argument
 * @line_number: second argument
 *
 * Return: Void
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;
	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
	{
		malloc_error();
	}

	if (*stack == NULL)
	{
		temp->n = num;
		temp->prev = NULL;
		temp->next = *stack;
		*stack = temp;
	}
	else
	{
		temp->n = num;
		temp->next = *stack;
		(*stack)->prev = temp;
		temp->prev = NULL;
		(*stack) = temp;
	}
}

/**
 * _pall - function that prints all the values on the stack
 * @stack: first argument
 * @line_number: second argument
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;

	(void)line_number;
	if (*stack == NULL)
		return;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
/**
 * _pint - fuction that prints the value at the top of the stack
 * @stack: the fierst argument
 * @line_number: the second argument
 *
 * Return: VOID
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		empty_stack(line_number);
	printf("%d\n", (*stack)->n);

}
/**
 * _div - divides the second top element of the stack by the top element.
 * @stack: first argument
 * @line_number: the second argument
 * Return:  VOID
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int div = 0;

	if (*stack == NULL || (*stack)->next == NULL)
		error_div(line_number);
	if ((*stack)->n == 0)
		error_div_zero(line_number);


	div = (((*stack)->next)->n) / ((*stack)->n);
	_pop(stack, line_number);
	(*stack)->n = div;
}

