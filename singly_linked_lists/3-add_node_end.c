#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *str_dup;
	unsigned int len = 0;

	str_dup = strdup(str);
	if (!str_dup)
	return (NULL);
	while (str[len])
	len++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
	free(str_dup);
	return (NULL);
	}
	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = NULL;
	if (!(*head))
	{
	*head = new_node;
	return (new_node);
	}
	temp = *head;
	while (temp->next)
	temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
