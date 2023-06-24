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
		temp = *stack;
		((*stack)->next)->prev = NULL;
		(*stack) = (*stack)->next;
		free(temp);
	}
}
/**
 * _swap - function swaps the top two elements of the stack.
 * @stack: the first argument
 * @line_number: the second argument
 *
 * Return: VOID
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	int a;

	if (*stack == NULL || ((*stack)->next) == NULL)
		error_swap(line_number);
	a = (*stack)->n;
	(*stack)->n = ((*stack)->next)->n;
	((*stack)->next)->n = a;

}
/**
 * _add - adds the top two elements of the stack.
  * @stack: the first argument
 * @line_number: the second argument
 *
 * Return: VOID
 */
void _add(stack_t **stack, unsigned int line_number)
{
	int result = 0;

	if (*stack == NULL || ((*stack)->next) == NULL)
		error_add(line_number);
	result = (*stack)->n + ((*stack)->next)->n;
	_pop(stack, line_number);
	(*stack)->n = result;

}

/**
 * _nop - function that doesn’t do anything.
 * @stack: the first argument
 * @line_number: the second argument
 *
 * Return: VOID
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * _sub - substracts the top element of the stack from the second.
 * @stack: linked list's head address.
 * @line_number: line number from file.
 * Return: VOID
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	int result = 0;

	if (*stack == NULL || (*stack)->next == NULL)
		error_sub(line_number);
	result = (((*stack)->next)->n) - ((*stack)->n);
	_pop(stack, line_number);
	(*stack)->n = result;
}
