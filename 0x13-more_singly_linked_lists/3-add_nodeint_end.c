#include "lists.h"

/**
* add_nodeint_end - add node at the end
* @head: the head of the list
* @n: the data to be added
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr;
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	ptr = *head;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	}
	return (temp);
}

