#include "monty.h"
int num;
int main(int argc, char **argv)
{
	if (argc != 2)
		argument_error();
	return execute(argv);
	
}