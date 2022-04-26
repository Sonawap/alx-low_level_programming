#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: listint_t **
 * @n: const int
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->next = NULL;

	return (new);


}

