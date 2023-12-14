#include "monty.h"
/**
 * _pall - Function to prints stack
 * @head: head
 * @counter: number used
 * Return: null
*/
void _pall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
