#include "lists.h"

/**
 * free_list - function Frees a list_t list
 * @head: function is Pointer to list_t list
 * Return: (void)
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
