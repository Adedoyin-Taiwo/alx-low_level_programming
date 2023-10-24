#include "lists.h"
/**
* delete_nodeint_at_index - as the name implies
* @head: the head of the linked list
* @index: where the node should be deleted
* Return: 1 (success) -1(failed)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *ptr;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (count < index - 1 && ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	if (ptr == NULL || ptr->next == NULL)
		return (-1);
	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	return (1);
}
