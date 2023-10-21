#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_list - frees the allocated
* @head: the head of the list
* Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *tryanderror;

	while (head != NULL)
	{
		tryanderror = head->next;
		free(head->str);
		free(head);
		head = tryanderror;
	}
}
