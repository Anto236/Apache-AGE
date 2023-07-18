#include <stdio.h>
#include "my_math.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 10;
	int dp[10000];

	/*Initialize dp array with -1*/
	for (size_t i = 0; i < sizeof(dp) / sizeof(dp[0]); i++)
		dp[i] = -1;

	printf("Recursive Approach: F(%d) = %d\n", n, F_recursive(n));
	printf("Iterative Approach: F(%d) = %d\n", n, F_iterative(n));
	printf("Memoization Approach: F(%d) = %d\n", n, F_memoization(n, dp));

	return (0);
}
