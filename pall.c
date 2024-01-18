#include "monty.h"
/**
 * f_pall - prints all the elements of a stack
 * @head: a pointer to a pointer to the head of the stack
 * @counter: line number
 *
 * Return: void
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	do {
		printf("%d\n", h->n);
		h = h->next;
	} while (h != NULL);
}

