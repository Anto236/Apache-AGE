#include "my_math.h"

/**
 * F_memoization - Calculates the value of F(n) using a memoization approach.
 * @n: The input integer value.
 * @dp: The memoization array to store the computed values.
 * Return: The calculated value of F(n).
 */
int F_memoization(int n, int dp[])
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n == 2)
		return (2);

	if (dp[n] != -1)
		return (dp[n]);

	dp[n] = F_memoization(n / 3, dp) * 3 + F_memoization(n / 2, dp);
		return (dp[n]);
}
