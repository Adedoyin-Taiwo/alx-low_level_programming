#include <stdio.h>

/**
* print_intro - prints introduction
* Return: Nothing
*/

void print_intro(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
__attribute__((constructor))
/**
* call_print_intro - calls string
* Return: Nothing at all
*/

	void call_print_intro(void)
{
	print_intro();
}
