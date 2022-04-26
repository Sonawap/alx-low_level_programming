#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: listint_t
 * @index: unsigned int
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *new = head;
	unsigned int i = 0;

	while (new)
	{

		if (i == index)
			return (new);

		i++;
		new = new->next;

	}

return (NULL);
}

