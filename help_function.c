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

	if (str[0] == '-')
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
 * free_stack - fuction that frees our stack
 * @stack: first argument
 * Return: VOID
 */
void free_stack(stack_t *stack)
{
	stack_t *temp;

	while (stack != NULL)
	{
		stack = temp;
		stack = stack->next;
		free(temp);
	}
}
