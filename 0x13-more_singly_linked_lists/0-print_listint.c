#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to the head of the list
 * Return: The number of element in the list
*/

size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	if (h->next != NULL)
	{
		return (1 + print_listint(h->next));
	}
	else
	return (1);
}
