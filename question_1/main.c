#include "fibonacci.h"
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	Node *add = makeFunc(ADD, 10, 6);
	Node *mul = makeFunc(MUL, 5, 4);
	Node *sub = makeFunc(SUB, mul->value, add->value);
	Node *fibo = fibonacci(sub->value, NULL);

	calc(add);
	calc(mul);
	calc(sub);
	calc(fibo);

	printf("add : %d\n", add->value);
	printf("mul : %d\n", mul->value);
	printf("sub : %d\n", sub->value);
	printf("fibo : %d\n", fibo->value);

	return (0);
}

