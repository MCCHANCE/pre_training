#include <stdio.h>

/**
 * main - entry point
 * print sizes of data types
 *
 * Return: 0
 */

int main()
{
	int a;
	char b;
	float c;
	double d;

	printf("size of \"int\" is %lu bytes\n", sizeof(a));
	printf("size of \"char\" is %lu byte\n", sizeof(b));
	printf("size of \"float\" is %lu bytes\n", sizeof(c));
	printf("size of \"double\" is %lu bytes\n", sizeof(d));

	return 0;
}
