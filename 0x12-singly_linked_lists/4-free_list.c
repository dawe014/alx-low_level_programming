#include"lists.h"
#include<stdlib.h>
/**
 * free_list - Frees a list_t list and all its elements.
 * @head: A pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp->str);  /* Free the string*/
		free(temp);       /* Free the node*/
	}
}
