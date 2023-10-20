#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - adds another node
* @head: the head of the list
* @str: the string
* Return: address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *tryanderror;

	if (head == NULL || str == NULL)
		return (NULL);
	tryanderror = malloc(sizeof(list_t));
	if (tryanderror == NULL)
	{
		free(tryanderror);
		return (NULL);
	}
	tryanderror->len = strlen(str);
	tryanderror->str = strdup(str);
	tryanderror->next = *head;
	*head = tryanderror;
	return (tryanderror);
}
