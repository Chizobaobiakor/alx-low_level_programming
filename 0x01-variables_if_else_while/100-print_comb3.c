#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits,
 * separated by a comma and space. Numbers are printed in ascending order,
 * with two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens_digit;
	int ones_digit;

	for (tens_digit = 0; tens_digit <= 8; tens_digit++)
	{
		for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
		{
			putchar(tens_digit + '0'); /* Convert tens digit to character */
			putchar(ones_digit + '0'); /* Convert ones digit to character */

			if (tens_digit != 8 || ones_digit != 9)
			{
				putchar(','); /* Print comma */
				putchar(' '); /* Print space */
			}
		}
	}

	putchar('\n'); /* Print newline */

	return (0);
}

