#include <stdio.h>

void print_intro()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
__attribute__((constructor))
	void call_print_intro()
{
    print_intro();
}
