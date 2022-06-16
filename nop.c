#include "monty.h"

/**
 * nop - no opration
 * @head: pointer pointer to the head of a list.
 * @line_number: bytecode line number.
 */

void nop(stack_t **head, unsigned int line_number)
{
	(void) head; /* Esto es lo mismo que poner: __attribute__((unused)) */
	(void) line_number;
}
