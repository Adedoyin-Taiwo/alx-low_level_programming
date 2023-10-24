#include "lists.h"

/**
* insert_nodeint_at_index - as the function name implies
* @idx: index
* @head: the head of the list
* @n: the nth node
* Return: new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	if (head == NULL || *head == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (count < idx - 1 && ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	if (ptr == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->next = ptr->next;
	ptr->next = temp;
	return (temp);
}
