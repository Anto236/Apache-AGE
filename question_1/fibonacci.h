#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <stddef.h> /*for 'NULL'*/
#include <stdio.h>
#include <stdlib.h>


/**
 * enum TypeTag - Represents the type of a node in a binary tree.
 *
 * @VALUE: The node represents a value.
 * @ADD: The node represents an addition operation.
 * @MUL: The node represents a multiplication operation.
 * @SUB: The node represents a subtraction operation.
 */
typedef enum TypeTag
{
	VALUE,
	ADD,
	MUL,
	SUB
} TypeTag;

/**
 * struct Node - Represents a node in a binary tree.
 * @type: The type of the node (VALUE, ADD, MUL, SUB).
 * @value: The value of the node (used for VALUE nodes).
 * @left: Pointer to the left child node.
 * @right: Pointer to the right child node.
 */
typedef struct Node
{
	TypeTag type;
	int value;
	struct Node *left;
	struct Node *right;
} Node;

Node *makeFunc(TypeTag type, int value_left, int value_right);
void calc(Node *node);
Node *fibonacci(int n, Node *node __attribute__((unused)));

#endif /* FIBONACCI_H */
