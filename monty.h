#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE

/** Librairies **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/** extern variable **/
extern int num;


/** Structs **/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/** Functions Prototype **/

void execute(char **argv);
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);

/** error functions **/

void malloc_error(void);
void argument_error(void);
void _hundale_push(unsigned int line);
void file_error(char **argv);
void error_pop(unsigned int line);
void error_swap(unsigned int line, stack_t **stack);
void error_add(unsigned int line);
void empty_stack(unsigned int line);
void error_unknown(int line, char *token);
void error_sub(unsigned int line);
void error_div(unsigned int line);
void error_div_zero(unsigned int line);


/** help functions **/

int check_int(char *str);
void free_stack(stack_t **stack);

#endif
