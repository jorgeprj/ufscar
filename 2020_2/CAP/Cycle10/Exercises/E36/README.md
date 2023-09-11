# Exercise 36 - Calculating the Average of Positive Values in an Array

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you are tasked with writing instructions to calculate the average of all values greater than zero in an array. The array should be named `vet` and consider it to have a base type of `double`. The number of valid elements in the array is given by the variable `tamanho`.

Your code should store the calculated average value in a variable named `media`. You must declare this variable, and it should have the type `double`.

If there are no valid elements in the array greater than zero, the `media` variable should end up with a value of -1.

You need to implement the function `double resposta(double vet[], int tamanho)` that performs this calculation.

## Example

Suppose you have the following array:

```c
double vet[] = {3.0, 2.0, 0.0, 5.0, -1.0, 4.0};
int tamanho = 6;
```

The algorithm should calculate and return:

```c
resposta(vet, tamanho) => 3.5
```

Therefore, the algorithm calculates the average of all positive values in the array, which is 3.5.

Now, you can implement the function `resposta` to calculate and return the average value based on the provided array and size.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle10/Exercises/E36/E36.c).