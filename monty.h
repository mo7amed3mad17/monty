#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdint.h>
#include <ctype.h>

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

extern stack_t *stack;
extern FILE *file;
extern char **parsed;

int execute(stack_t **stack, char **parsed, unsigned int line_c, FILE *file);
char **parse_line(char *line);
int check_n(char *n);
void free_s(stack_t *stack);
void _push(stack_t **stack, unsigned int line_c, void* n);
void _pall(stack_t **stack, unsigned int line_c);
void _pint(stack_t **stack, unsigned int line_c);
void _nop(stack_t **stack, unsigned int line_c);
#endif
