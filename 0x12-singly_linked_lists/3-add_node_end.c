#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Address of the first node in the list
 * @str: Address of the string to insert into the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
