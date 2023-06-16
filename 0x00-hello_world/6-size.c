#include<stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Successful)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizepof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizepof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizepof(c));
printf("Size of a long long init: %lu byte(s)\n", (unsigned long)sizepof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizepof(f));
return (0);
}


