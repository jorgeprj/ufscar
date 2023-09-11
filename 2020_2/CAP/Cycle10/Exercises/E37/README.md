# Exercise 37 - Verifying if Two Arrays are Identical

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you are required to write instructions to check whether two arrays have identical contents. The first array is named `vet1` and has a length of `tamanho1`, while the second array is named `vet2` and has a length of `tamanho2`. Both arrays have a base type of `double`.

After performing the verification, a variable named `iguais` should have a value of 1 (true) if the arrays are identical or 0 (false) if they are different. You must declare this variable in your code.

You need to implement the function `void resposta(double vet1[], int tamanho1, double vet2[], int tamanho2)` that performs this verification.

## Example

Suppose you have the following arrays:

```c
double vet1[] = {1.0, 2.0, 3.0};
int tamanho1 = 3;
double vet2[] = {1.0, 2.0, 3.0};
int tamanho2 = 3;
```

The algorithm should verify and print:

```c
resposta(vet1, tamanho1, vet2, tamanho2) => "iguais"
```

In this case, the `iguais` variable will have a value of 1, indicating that the arrays `vet1` and `vet2` have identical contents.

Now, you can implement the function `resposta` to check whether the two arrays have identical contents and print "iguais" or "diferentes" accordingly.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle10/Exercises/E37/E37.c).