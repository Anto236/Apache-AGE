Fibonacci Number Calculation - Different Approaches
===================================================
- By Antony Mbugua

Resources
---------
Bitnine_Apache_AGE_2023_Internship_Program.pdf

Requirements
------------

### General
-    Used editor `vi`
-    Files compiled on Ubuntu 22.04 using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu99`
-    code uses the `Betty` style. Itis checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-    The prototypes of all your functions and the prototype of the functions are included in your header file called `mt_math.h`
-    All header files are include guarded

Question 2
----------

-    Implement the following piecewise recurrence relation in the 3 different ways.
-    Explain the differences (advantages, disadvantages) between the 3.
-    Must be written in C
The problem
F(n) = F(n
3)3)+ F(n 2) where F(0) = 0, F(1) = 1, and F(2) = 2.
Assume that n will be less than or equal to the maximum integer value and non
negative. You only need to
write the function(s).

```
ubuntu@ubuntu-focal:~/test/question_2$ cat main.c
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
ubuntu@ubuntu-focal:~/test/question_2$ gcc -Wall -pedantic -Werror -Wextra -std=gnu99 memoization.c main.c iterative.c recursive.c -o a
ubuntu@ubuntu-focal:~/test/question_2$ ./a
Recursive Approach: F(10) = 17
Iterative Approach: F(10) = 17
Memoization Approach: F(10) = 17
ubuntu@ubuntu-focal:~/test/question_2$
```

**Repo:**

-    GitHub repository: `Apache-AGE`
-    Directory: `question_2`

**Recursive Approach**: The function F_recursive uses recursion to calculate the Fibonacci number. It has the advantage of simplicity, but it can be inefficient for large values of n due to redundant function calls.

**Iterative Approach**: The function F_iterative uses a loop to iteratively calculate the Fibonacci number. It is more efficient than the recursive approach as it avoids redundant function calls. However, it still requires O(n) time complexity.

**Memoization Approach**: The function F_memoization uses memoization to store the results of already calculated Fibonacci numbers in an array. This approach significantly reduces redundant calculations and improves the efficiency of the algorithm. It has a time complexity of O(n) and is the most efficient among the three.

## Advantages and Disadvantages

### Recursive Approach:

-   Advantages:
    -    Simple and easy to understand.
    -    Represents the mathematical definition of Fibonacci numbers directly.
-   Disadvantages:
    -    Exponential time complexity due to redundant function calls for large n, leading to slow execution for large values.

### Iterative Approach:

-   Advantages:
    -    More efficient than the recursive approach as it avoids redundant function calls.
    -    Has linear time complexity, making it faster than the recursive approach.
-   Disadvantages:
    -    Still requires O(n) time complexity, which can be slow for very large values of n.

### Memoization Approach:

-   Advantages:
    -    Most efficient approach among the three due to memoization, which saves the results of already calculated Fibonacci numbers.
    -    Provides significant performance improvement for large values of n.
    -    Has linear time complexity (O(n)).
-   Disadvantages:
    -    Requires additional memory to store the results in the memoization array.

How to Compile and Run
----------------------

1.  First, make sure you have a C compiler (e.g., gcc) installed on your system.
2.  Clone this repository and navigate to the question_2 directory:

```
git clone https://github.com/Anto236/Apache-AGE.git
cd fibonacci/question_2
```

3.  Compile the C files using gcc:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu99 memoization.c main.c iterative.c recursive.c -o a
```

4.  Run the executable:

```
./a
```
