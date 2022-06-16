#include "monty.h"

/**
 *_rotl - swaps the top two elements of the stack.
 *@head: Pointer pointer to the head of a doubly linked list.
 *@line_number: line
 **/

void _rotl(stack_t **head, unsigned int __attribute__((unused)) line_number)
{
	stack_t *aux = *head;

	if (*head == NULL || aux->next == NULL)
		return;
	if ((*head)->next != NULL)
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = *head;
		(*head)->prev = aux;
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		aux->next->next = NULL;
	}
}

