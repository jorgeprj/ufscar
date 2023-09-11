# Exercise 41 - Summing a Matrix Row

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you need to write the code to sum the values of one row of a matrix.

Consider the following:

- The matrix is named `mat` and has already been declared and filled with values.
- The dimensions of the matrix are defined in two existing variables: `numero_linhas` (number of rows) and `numero_colunas` (number of columns), both of type `int`.
- The row to be used for the sum is indicated by the variable `linha`, which already contains the desired value.
- The sum value must be placed in a variable named `soma_linha`, which needs to be declared.
- Your code should not produce any output; it should only ensure that the sum is stored in the indicated variable.

## Example

Suppose you have the following matrix and variables:

```c
int mat[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
int numero_linhas = 3;
int numero_colunas = 4;
int linha = 1;
int soma_linha;
```

The algorithm should sum the values of the second row (row 1) of the matrix and store the result in `soma_linha`.

```c
soma_linha = // The sum of the second row (5 + 6 + 7 + 8) should be stored in soma_linha
```

Now, you can implement the code to achieve this.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle11/Exercises/E41/E41.c).