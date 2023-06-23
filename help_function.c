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
