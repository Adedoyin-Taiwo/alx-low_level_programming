#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_list - prints the list
* @h: pointer
* Return: 0
*/

size_t print_list(const list_t *h)
{
	int counter = 0;
	const list_t *ptr = h;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			counter++;
			ptr = ptr->next;
		}
		else
		{
		printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		counter++;
		}
	}
	return (counter);
}
