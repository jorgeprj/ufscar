# Exercise 38 - Reversing the Order of an Array

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you need to write the necessary instructions to reverse the order of the data in an array. To achieve this, swap the content of the first position with the last, the content of the second position with the second-to-last, and so on. The array should be named `vet` and consider it to have a base type of `double`. The number of valid elements in the array is given by the variable `tamanho`.

You are not allowed to declare another array to assist in the solution.

You need to implement the function `void resposta(double vet[], int tamanho)` that performs this reversal.

## Example

Suppose you have the following array:

```c
double vet[] = {1.0, 2.0, 3.0, 4.0, 5.0};
int tamanho = 5;
```

The algorithm should reverse the order of the array:

```c
resposta(vet, tamanho); // The array vet should be {5.0, 4.0, 3.0, 2.0, 1.0}
```

After executing the `resposta` function, the array `vet` should have its elements in reverse order.

Now, you can implement the function `resposta` to reverse the order of the array without declaring another array.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle10/Exercises/E38/E38.c).