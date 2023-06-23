#include "monty.h"

/**
 * execute - the main function
 * argc: the first argument
 * argv: the second argument
 *
 * Return: integer
 */
int execute(char **argv)
{
	int counter;
	char *line_ptr = NULL;
	size_t n = 0;
	char *token;
	char cmd[1024];
	int _Line = 1;
	stack_t *stack = NULL;
	instruction_t array [] =
	{
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};
	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{
		file_error(argv);
	}
	while((getline(&line_ptr, &n, file)) != -1)
	{
		_Line++;
		for (counter = 0; array[counter].opcode != NULL; counter++)
		{
			token = strtok(line_ptr, "\n\t ");
			if (token == NULL)
			{
				continue;
			}
			strcpy(cmd, token);
			if (strcmp(cmd, "push") == 0)
			{
				token = strtok(NULL, "\n\t ");
				if (check_int(token) == 1)
					_hundale_push(_Line);
				num = atoi(token);
				(array[counter].f(&stack, _Line));
				break;
			}
			else if (strcmp(token, array[counter].opcode) == 0)
			{
				(array[counter].f(&stack, _Line));
				break;
			}
		}
		if (array[counter].opcode == NULL)
		{
			fprintf (stderr, "L%u: unknown instruction %s\n", _Line, token);
			exit(EXIT_FAILURE);
		}
	}
	fclose(file);
	if (line_ptr != NULL)
		free(line_ptr);
	free_stack(&stack);
	
	
	return (0) ;
}
