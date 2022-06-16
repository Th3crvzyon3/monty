#include "monty.h"

/**
 * pchar - print the char at the top of the stack, followed by a new line.
 * @head: pointer pointer to the head of a list.
 * @line_number: bytecode line number.
 */

void pchar(stack_t **head, unsigned int line_number)
{
	stack_t *aux = *head;

	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (aux->n >= 0 && aux->n <= 127) /*ponemos los valores ascii del 0 al 127*/
		printf("%c\n", aux->n); /*usamos el %c para imprimir los num como caracter*/
	else
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

}
