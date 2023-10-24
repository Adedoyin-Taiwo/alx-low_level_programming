#include "lists.h"

/**
* pop_listint - removes the first node
* @head: the head of the list
* Return: data in the head
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	val = temp->n;
	*head = (*head)->next;
	free(temp);
	return (val);
}
