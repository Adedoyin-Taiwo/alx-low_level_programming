#include "lists.h"

/**
* sum_listint -  sum of all the data (n)
* @head: head of the list
* Return: 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
