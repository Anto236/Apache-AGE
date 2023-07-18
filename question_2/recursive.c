#include "my_math.h"

/**
 * F_recursive - Calculates the value of F(n) using a recursive approach.
 * @n: The input integer value.
 * Return: The calculated value of F(n).
 */
int F_recursive(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n == 2)
		return (2);

	return (F_recursive(n / 3) * 3 + F_recursive(n / 2));
}
