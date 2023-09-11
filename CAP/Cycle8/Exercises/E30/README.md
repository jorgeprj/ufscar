# Exercise 30 - Recursive Function for Exponentiation

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you are challenged to create a recursive C function that calculates the exponentiation of a number `x` raised to the power `n` based on the following definition:

```
x^n={
        1 ⇒ n = 0
        x * x^(n−1)  ⇒ n > 0
    }
```

The algorithm should follow these steps:

1. Implement a recursive function called `power` that takes two arguments: `x` (the base) and `n` (the exponent).
2. Inside the function, use the provided definition to calculate the result of `x` raised to the power of `n`.
3. Return the calculated result as the output of the function.

Ensure that the `power` function correctly calculates the exponentiation of `x` raised to the power `n` following the given definition.

## Example

Suppose the user provides the following values:

- Base `x`: 2
- Exponent `n`: 4

The algorithm should calculate and return:

```
Result: 16
```

Therefore, the algorithm correctly calculates the exponentiation of 2 raised to the power of 4, which is 16.

Now, you can implement the program with the `power` function to calculate exponentiation recursively.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle8/Exercises/E30/E30.c).