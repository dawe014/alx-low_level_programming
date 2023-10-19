#include<stdio.h>
#include "lists.h"
/**
 * print_list - Prints all element of linked list
 * @h: A pointer to the head of linked list
 *
 * Return: The number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t i = 0;

	while (ptr != NULL)
	{
        if(h->str == NULL)
        {
             printf("[0] (nil)\n");
        }
		printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
