#ifndef MONTY_H
#define MONTY_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>

/* Global variable to see if it is a stack or a queue - 0 is stack */

extern int stack_or_queue;

/* Structures */
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

/* Main functions Prototypes */

void (*get_op_func(char *token_op))(stack_t **stack, unsigned int line_number);
int add_dnodeint(stack_t **head, int n);
void del_node(stack_t **head);
void push(stack_t **head, unsigned int line_number, char *num_str);
void pall(stack_t **head, unsigned int line_number);
void pint(stack_t **head, unsigned int line_number);
void pop(stack_t **head, unsigned int line_number);
void swap(stack_t **head, unsigned int line_number);
void nop(stack_t **head, unsigned int line_number);
void _add(stack_t **head, unsigned int line_number);
void _sub(stack_t **head, unsigned int line_number);
void _div(stack_t **head, unsigned int line_number);
void _mul(stack_t **head, unsigned int line_number);
void _mod(stack_t **head, unsigned int line_number);
void pchar(stack_t **head, unsigned int line_number);
void _rotl(stack_t **head, unsigned int line_number);
void pstr(stack_t **head, unsigned int line_number);
void _rotr(stack_t **head, unsigned int __attribute__((unused)) line_number);
int add_dnodeint_end(stack_t **head, const int n);
void queue(stack_t __attribute__((unused))  **head, unsigned int line_number);
void stack(stack_t __attribute__((unused))  **head, unsigned int line_number);

/* Auxiliar functions */

void *_calloc(unsigned int nmemb, unsigned int size);
int check_number(char *str);
void free_doubly_ll(stack_t **head);

#endif
