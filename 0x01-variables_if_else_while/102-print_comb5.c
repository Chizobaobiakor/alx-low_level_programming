#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * The numbers range from 0 to 99, printed with two digits.
 * The combinations are separated by a comma and space.
 * The numbers are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			putchar((num1 / 10) + '0'); /* Print tens digit of num1 */
			putchar((num1 % 10) + '0'); /* Print ones digit of num1 */
			putchar(' ');
			putchar((num2 / 10) + '0'); /* Print tens digit of num2 */
			putchar((num2 % 10) + '0'); /* Print ones digit of num2 */

			if (num1 != 98 || num2 != 99)
			{
				putchar(','); /* Print comma */
				putchar(' '); /* Print space */
			}
		}
	}

	putchar('\n'); /* Print newline */

	return (0);
}
