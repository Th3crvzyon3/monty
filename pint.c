#include "monty.h"

/**
 * pint - print the value at the top of the stack, followed by a new line.
 * @head: pointer at the beginning of the list.
 * @line_number: bytecode line number.
 */

void pint(stack_t **head, unsigned int line_number)
{
	stack_t *aux = *head;

	if (*head != NULL)
	{
		printf("%d\n", aux->n);
	}
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
