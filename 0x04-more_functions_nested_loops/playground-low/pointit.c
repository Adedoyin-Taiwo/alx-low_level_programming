#include <stdio.h>

int main(void)
{
	char *p;

	printf("size of pointer is %lu\n", sizeof(*p));
	printf("The address of *p is %p\n", &p);
	return 0;
}
