#include "lists.h"

/**
* listint_len - lenght of the linked list
* @h: the head of the list
* return: number of elements
* Return: 0
*/

size_t listint_len(const listint_t *h)
{
	int counter = 0;
	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}
