#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * @head: struct
 * @n: const int
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *tail = *head;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	temp->prev = tail;
	tail->next = temp;

	return (temp);
}
