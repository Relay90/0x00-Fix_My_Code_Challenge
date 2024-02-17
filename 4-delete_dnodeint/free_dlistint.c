#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a list
 *
 * @head: A pointer to the first element of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}
