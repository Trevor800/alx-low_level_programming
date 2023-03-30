#include "lists.h"
#include <string.h>

/**
 * add_node - functions Adds a new node at the beginning of a list_t list
 * @head: function is Pointer to the of the list_t list.
 * @str: String of list_t list to add
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);

	(*head) = new;

	return (*head);
}
