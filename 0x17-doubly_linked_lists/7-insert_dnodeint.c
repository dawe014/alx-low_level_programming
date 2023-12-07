#include "lists.h"

/**
 * insert_dnodeint_at_index - Add node at nth index
 * @h: Head of node
 * @idx: index
 * @n: struct int
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *curr;
	unsigned int i = 0;

	if (h == NULL || node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	curr = *h;

	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	while (curr)
	{
		if (curr->next == NULL && i == idx - 1)
		{
			node = add_dnodeint_end(h, n);
			return (node);
		}
		else if ((idx - 1) == i)
		{
			node->next = curr->next;
			node->prev = curr;
			curr->next->prev = node;
			curr->next = node;
			return (node);
		}
		i++;
		curr = curr->next;
	}
	free(node);
	return (NULL);
}
