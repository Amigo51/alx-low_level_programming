#include "lists.h"

/**
 * listint_len - func return of number of elements in a linked listint_t list.
 *
 * @h: head pointer
 *
 * Return: num of elem
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
	h = h->next;
		a++;
	}
	return (a);
}
