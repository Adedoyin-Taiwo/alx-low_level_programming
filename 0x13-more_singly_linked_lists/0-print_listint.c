#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint - prints the elements of a list
* @h: the head of the list
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int counter = 0;
	const listint_t *pointer;

	pointer = h;

	while (pointer != NULL)
	{
		printf("%d\n", pointer->n);
		pointer = pointer->next;
		counter++;
	}
	return (counter);
}
