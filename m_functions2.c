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
	int a;

	if (*stack == NULL)
		error_pchar(line_number);

	a = (*stack)->n;

	if (!(a >= 32 && a <= 126))
		error_pchar_range(line_number);
	putchar(a);
	putchar('\n');
}
