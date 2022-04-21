#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * function add_node_end - this function add a node to the end of the list
 * head - points to the end of the node
 * str - holds a str
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	int length = 0;
	list_t *temp = *head;


	while (str[length])
		length++;

	if (!newnode)
		return (NULL);


	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = NULL;

	if (!(*head))
	{
		*head = newnode;
		return (newnode);

	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = newnode;

	return (newnode);
}
