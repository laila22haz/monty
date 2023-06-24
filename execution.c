#include "monty.h"
/**
 * execute - the main function
 * @argv: the first argument
 *
 * Return: integer
 */
void execute(char **argv)
{
	int _Line = 1, counter;
	size_t n = 0;
	char *line_ptr = NULL, *token;
	stack_t *stack = NULL;
	instruction_t array[] = {{"push", _push}, {"pall", _pall}, {"pint", _pint},
	{"pop", _pop}, {"div", _div}, {"swap", _swap}, {"add", _add}, {"nop", _nop},
	{"sub", _sub}, {"mul", _mul}, {"mod", _mod}, {"pchar", _pchar}, {NULL, NULL}};
	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
		file_error(argv);
	while (getline(&line_ptr, &n, file) != -1)
	{
		token = strtok(line_ptr, "\n\t ");
		if (token == NULL)
			continue;
		for (counter = 0; array[counter].opcode != NULL; counter++)
		{
			if (strcmp(token, array[counter].opcode) == 0)
			{
				if (strcmp(token, "push") == 0)
				{
					token = strtok(NULL, "\n\t ");
					if (check_int(token) == 1)
						_hundale_push(_Line);
					num = atoi(token);
				}
				(array[counter].f(&stack, _Line));
				break;
			}
		}
		if (array[counter].opcode == NULL)
			error_unknown(_Line, token);
		_Line++;
	}
	fclose(file);
	free(line_ptr);
	free_stack(&stack);
}
