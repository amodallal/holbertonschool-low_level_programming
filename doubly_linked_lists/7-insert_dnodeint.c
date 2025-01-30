#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The data to store in the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

	if (idx == 0)
	return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	return (NULL);
	new_node->n = n;
	while (temp && i < idx - 1)
	{
	temp = temp->next;
	i++;
	}
	if (!temp)
	{
	free(new_node);
	return (NULL);
	}
	if (!temp->next)
	return (add_dnodeint_end(h, n));
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
