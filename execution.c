#include "monty.h"

/**
 * execute - the main function
 * argc: the first argument
 * argv: the second argument
 *
 * Return: integer
 */
int execute(int argc, char **argv)
{
	int counter;
	int read;
	char *line_ptr = NULL;
	size_t n = 0;
	char *token;
	char cmd[1024];
	char *_Line = 1;
	instruction_t array [] =
	{
		{"push", _push},
		{"pall", _pall},
		{NULL, NULL}
	};
	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
		file_error(argv);
	if (argc != 2)
		argument_error();
	read = getline(&line_ptr, &n, file);
	while(read != EOF)
	{
		for (counter = 0; array[counter].opcode != NULL; counter++)
		{
			token = strtok(line_ptr, "\n\t ");
			if (token == NULL)
				continue;
			strcopy(cmd, token);
			if (strcmp(token, "push") == 0)
			{
				token = strtok(NULL, "\n\t ");
				if (check_int(token) == 1)
					handel_error(_Line);
				num = atoi(token);
			}
			else if (strcmp(token, array[counter].opcode) == 0)
			{
				(array[counter].f(NULL,0));
				break;
			}
		}
	}
	free(line_ptr);
	fclose(file);
	return (0) ;
}
