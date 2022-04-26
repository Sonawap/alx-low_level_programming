#include "lists.h"

/**
 * add_nodeint - add a node in the beginning
 * @head: listint_t **
 * @n: const int
 * Return: listint_t *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;

	*head = new;

	return (*head);




}

