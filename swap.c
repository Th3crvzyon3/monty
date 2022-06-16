#include "monty.h"

/**
 *swap - swaps the top two elements of the stack.
 *@head: Pointer pointer to the head of a doubly linked list.
 *@line_number: bytecode line number
 **/

void swap(stack_t **head, unsigned int line_number)
{
	int num = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		free_doubly_ll(head);
		exit(EXIT_FAILURE);
	}
	num = (*head)->n;
	*head = (*head)->next;
	(*head)->prev->n = (*head)->n;
	(*head)->n = num;
	*head = (*head)->prev;
}

