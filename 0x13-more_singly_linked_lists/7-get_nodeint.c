#include "lists.h"

/**
* get_nodeint_at_index - returns the node at index n
* @head: the head of the list
* @index: index of the node to be returned
* Return:the data on the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr;

	if (index < 0)
		return (NULL);
	ptr = head;
	while (count < index)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
		ptr = ptr->next;
		count++;
		}
	}
	return (ptr);
}

