# Exercise 44 - Identifying the Identity Matrix

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you need to write the code to determine whether a given matrix is an identity matrix.

A matrix is considered an identity matrix if it meets the following conditions:

- It is square (i.e., the number of rows is equal to the number of columns).
- All elements on the main diagonal are equal to 1.
- All elements outside the main diagonal are equal to 0.

Consider the following:

- The matrix is named `mat` and has already been declared and filled with values (data type: `double`).
- The dimensions of the matrix are defined in two existing variables: `numero_linhas` (number of rows) and `numero_colunas` (number of columns), both of type `int`.
- A variable named `identidade`, which needs to be declared, should end up with a value of 1 (or `true`) if the matrix is an identity matrix, or 0 (or `false`) if it is not.
- Your code should not produce any output; it should only ensure that the result is stored in the indicated variable.

## Example

Suppose you have the following matrix and variables:

```c
double mat[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
int numero_linhas = 3;
int numero_colunas = 3;
int identidade;
```

The algorithm should analyze the matrix and determine that it is an identity matrix, so it sets `identidade` to 1.

```c
identidade = 1; // The matrix is an identity matrix
```

Now, you can implement the code to determine if a matrix is an identity matrix.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle11/Exercises/E44/E44.c).