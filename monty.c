#include "monty.h"
int num;
/**
 * main - main fuction
 * @argc: first argument
 * @argv: second argument
 * Return: integer
 */
int main(int argc, char **argv)
{
	if (argc != 2)
		argument_error();
	execute(argv);
	return (0);

}
