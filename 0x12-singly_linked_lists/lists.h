#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: the list_t list
 *
 * Return: Number of codes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}}
