#include "monty.h"
/**
 * _instructions - Returns an array of instruction_t structs.
 *
 * Return: An array of instruction_t structs.
 */
instruction_t *_instructions(void)
{
	static instruction_t array[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"div", _div},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{NULL, NULL}
	};
	return (array);
}
