#include <stdio.h>

/**
 * main - entry point
 * printing a datatype
 *
 * Return: 0
 */
int main()
{
	int a;
	char b;
	float c;
	double d;

	printf("size of \"int\" is %zu\n", sizeszof(a));
	printf("size of \"char\" is %zu\n", sizeszof(b));
	printf("size of \"float\" is %zu\n", sizeszof(c));
	printf("size of \"double\" is %zu\n", sizeszof(d));

	return 0;
}
