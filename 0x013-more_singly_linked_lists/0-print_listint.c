#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head pointer
 *
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *b)
{
	size_t a = 0;

	while (b != NULL)
	{
		printf("%d\n", b->n);
		b = b->next;
		a++;
	}
	return (a);
}

