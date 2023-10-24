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
	size_t i = 0;

	const  listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
