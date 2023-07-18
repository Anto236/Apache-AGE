#include "fibonacci.h"
/**
 * makeFunc - Creates a new node representing an operation or a value.
 * @type: The type of the node (operation or value).
 * @value_left: The left operand's value (for operations).
 * @value_right: The right operand's value (for operations).
 * Return: A pointer to the newly created node.
 */
Node *makeFunc(TypeTag type, int value_left, int value_right)
{
	Node *node = (Node *)malloc(sizeof(Node));

	node->type = type;
	/*For VALUE nodes, set the values directly.*/
	if (type == VALUE)
		node->value = value_left;
	else
	{
		/*For other operation nodes, create the left and right children.*/
		node->left = (Node *)malloc(sizeof(Node));
		node->left->type = VALUE;
		node->left->value = value_left;

		node->right = (Node *)malloc(sizeof(Node));
		node->right->type = VALUE;
		node->right->value = value_right;

		/*Calculate the value based on the operation.*/
		switch (type)
		{
			case ADD:
				node->value = node->left->value + node->right->value;
				break;
			case MUL:
				node->value = node->left->value * node->right->value;
				break;
			case SUB:
				node->value = node->left->value - node->right->value;
				break;
			/*Add a default case to handle VALUE enumeration.*/
			default:
				break;
		}
	}

	return (node);
}

/**
 * calc - Calculates the value of a node based on its type and operands.
 * @node: The node whose value needs to be calculated.
 */
void calc(Node *node)
{
	switch (node->type)
	{
		case VALUE:
			break;
		case ADD:
			node->value = node->left->value + node->right->value;
			break;
		case MUL:
			node->value = node->left->value * node->right->value;
			break;
		case SUB:
			if (node->right == NULL)
				/*Handle SUB with no right operand.*/
				node->value = node->left->value;
			else
				node->value = node->left->value - node->right->value;
			break;
	}
}

/**
 * fibonacci - Generates the nth Fibonacci
 * number using a binary tree representation.
 * @n: The index of the desired Fibonacci number (starting from 0).
 * @node: The base node for building the binary tree.
 * Return: A pointer to the nth Fibonacci number node.
 */
Node *fibonacci(int n, Node *node __attribute__((unused)))
{
	/*The __attribute__((unused)) will suppress warning for node.*/
	Node *fib[n + 1];
	/*Initialize the first Fibonacci number as 0.*/
	fib[0] = makeFunc(VALUE, 0, 0);
	/*Initialize the second Fibonacci number as 1.*/
	fib[1] = makeFunc(VALUE, 1, 0);

	for (int i = 2; i <= n; i++)
	{
		/*Use ADD operation to generate the next Fibonacci number.*/
		fib[i] = makeFunc(ADD, fib[i - 1]->value, fib[i - 2]->value);
		calc(fib[i]);
	}

	return (fib[n]);
}
