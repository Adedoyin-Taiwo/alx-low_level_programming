
#include "lists.h"

/**
* add_nodeint - add node at the beginning
* @head: the head of the list
* @n: the data to be added
* Return: Address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
