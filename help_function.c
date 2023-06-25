#include "monty.h"

/**
 * check_int - fuction that check integer
 * @str: first argument
 *
 * Return: integer
 */
int check_int(char *str)
{
	int i = 0;

	if (str == NULL)
		return (1);
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (1);
		}
	i++;
	}
	return (0);
}
/**
 * check_comment - Checks if the given argument is a comment.
 * @arg: The argument to be checked.
 * @i: The value of i.
 *
 * Return: 1 if the argument is a comment, 2 otherwise.
 */
int check_comment(char *arg, int i)
{
	if (arg == NULL || arg[0] == '#')
	{
		i++;
		return (1);
	}
	return (2);
}
/**
 * free_stack - fuction that frees our stack
 * @stack: first argument
 * Return: VOID
 */
void free_stack(stack_t **stack)
{
stack_t *curr = *stack;
	stack_t *tmp;

	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	*stack = NULL;
}
