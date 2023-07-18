#include "my_math.h"

/**
 * F_iterative - Calculates the value of F(n) using an iterative approach.
 * @n: The input integer value.
 * Return: The calculated value of F(n).
 */
int F_iterative(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n == 2)
		return (2);

	int dp[n + 1];

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++)
		dp[i] = dp[i / 3] * 3 + dp[i / 2];

	return (dp[n]);
}

