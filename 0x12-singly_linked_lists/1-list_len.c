#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
* list_len - prints the list
* @h: pointer
* Return: 0
*/

size_t list_len(const list_t *h)
{
	int counter = 0;
	const list_t *ptr = h;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			counter++;
			ptr = ptr->next;
		}
		else
		{
		ptr = ptr->next;
		counter++;
		}
	}
	return (counter);
}
