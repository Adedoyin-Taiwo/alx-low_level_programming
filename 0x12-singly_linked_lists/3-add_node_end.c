#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - adds node at the end of the list
* @head: the pointer to the firt node
* @str: the string
* Return: pointer
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tryanderror;
	list_t *ptr;

	tryanderror = malloc(sizeof(list_t));
	if (tryanderror == NULL)
	{
		return (NULL);
	}
	tryanderror->str = strdup(str);
	tryanderror->len = strlen(str);
	tryanderror->next = NULL;
	ptr = *head;
	if (*head == NULL)
	{
		*head = tryanderror;
		return (tryanderror);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tryanderror;
	return (tryanderror);
}
