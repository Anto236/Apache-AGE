Fibonacci Sequence Generation Using Dynamic Programming
=======================================================
- By Antony Mbugua

Resources
---------
Bitnine_Apache_AGE_2023_Internship_Program.pdf

Requirements
------------

### Development Environment:
-   OS: Ubuntu 22.04
-   Compiler: GCC (GNU Compiler Collection) version 11.1.0

### General
-    Used editor `vi`
-    Files compiled on Ubuntu 22.04 using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu99`
-    code uses the `Betty` style. Itis checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-    The prototypes of all your functions and the prototype of the functions are included in your header file called `fibonacci.h`
-   All header files are include guarded

Question 1
----------
**Node is defined as follows :**
typedef struct Node
{
TypeTag type;
} Node;
typedef enum TypeTag {
...
}
Using
this structure, please write a function that returns fibonacci sequence based on the following arithmetic operations and conditions
The
fibonacci function should be implemented using Dynamic Programming

```
main()
{
  Node *add = (*makeFunc(ADD))(10, 6);
  Node *mul = (*makeFunc(MUL))(5, 4);
  Node *sub = (*makeFunc(SUB))(mul, add);
  Node *fibo = (*makeFunc(SUB))(sub, NULL);
  calc(add);
  calc(mul);
  calc(sub);
  calc(fibo)
}
Output
add : 16
mul : 20
sub :4
fibo : 2
```

In this program, we generate the Fibonacci sequence using Dynamic Programming. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1. However, in this implementation, we use the following arithmetic operations and conditions to generate the Fibonacci sequence:

1.  **Arithmetic Operations**: We represent arithmetic operations using the TypeTag enum, which includes four types:

-   `ADD`: Addition
-   `MUL`: Multiplication
-   `SUB`: Subtraction
-   `VALUE`: Represents a single integer value

2.  **Arithmetic Expression Tree**: We build an arithmetic expression tree using the `Node` struct, which represents nodes in the tree. Each node has a `TypeTag` to indicate whether it is an arithmetic operation node or a value node. For arithmetic operation nodes, we have left and right child nodes, and for value nodes, we have the integer value.

3.  **Function to Generate Fibonacci**: We use the Dynamic Programming approach to generate the Fibonacci sequence up to a given value `n`. The function `fibonacci(int n)` takes an integer `n` as input and returns an array of `Node` structs representing the Fibonacci sequence up to the `n`th value. The array contains `n+1` elements to store all the Fibonacci numbers from 0 to `n`.

4.  **Calculation of Fibonacci Values**: We calculate the Fibonacci sequence by using the arithmetic expression tree. Starting from the base cases `F(0) = 0` and `F(1) = 1`, we use the arithmetic operations `ADD` and `MUL` to generate the subsequent Fibonacci numbers.

5.  **Printing the Fibonacci Sequence**: In the `main` function, we call the `fibonacci` function to generate the Fibonacci sequence up to the specified value `n`. We then print the Fibonacci numbers from 0 to `n`.

```
ubuntu@ubuntu-focal:~/test/question_1$ cat main.c
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

ubuntu@ubuntu-focal:~/test/question_1$ gcc -Wall -pedantic -Werror -Wextra -std=gnu99 fibonacci.c main.c -o p
ubuntu@ubuntu-focal:~/test/question_1$ ./p
add : 16
mul : 20
sub : 4
fibo : 3
ubuntu@ubuntu-focal:~/test/question_1$
```

**Repo:**

-    GitHub repository: `Apache-AGE`
-    Directory: `question_1`

**NB:** There is an error in the provided output, where the Fibonacci value of 4 is given as `2`, but the correct Fibonacci value for 4 is `3`, which is reflected in the program's output.

How to Compile and Run
----------------------

1.  First, make sure you have a C compiler (e.g., gcc) installed on your system.
2.  Clone this repository and navigate to the question_2 directory:

```
git clone https://github.com/Anto236/Apache-AGE.git
cd Apache-AGE/question_1
```

3.  Compile the C files using gcc:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu99 fibonacci.c main.c -o p
```

4.  Run the executable:

```
./p
```
