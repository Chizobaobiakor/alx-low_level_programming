#include <stdio.h>

void print_fibonacci(int n);

int main(void)
{
	print_fibonacci(98);

	return 0;
}

void print_fibonacci(int n)
{
	int first = 1;
	int second = 2;
	int next;

	printf("%d, %d, ", first, second);

	for (int i = 3; i <= n; i++)
	{
	next = first + second;
	printf("%d", next);

	if (i < n)
	printf(", ");

	first = second;
	second = next;
	}

	printf("\n");
}
