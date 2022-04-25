#include "lists.h"
#include <stdio.h>

/**
 * print_listint- prints all the elemtents of the list
 * @h: listint_t
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{

	int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
return (i);
}

