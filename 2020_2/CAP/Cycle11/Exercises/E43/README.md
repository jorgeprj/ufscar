# Exercise 43 - Finding the Row Index with the Lowest Sum

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you need to write the code to determine the index of the matrix row that contains the lowest sum.

Consider the following:

- The matrix is named `mat` and has already been declared and filled with values.
- The dimensions of the matrix are defined in two existing variables: `numero_linhas` (number of rows) and `numero_colunas` (number of columns), both of type `int`.
- The index of the row with the lowest sum should be stored in a variable named `indice_menor`, which needs to be declared.
- If there are two rows with the same sum, the index of the first occurrence should be indicated.
- Your code should not produce any output; it should only ensure that the index is stored in the indicated variable.

## Example

Suppose you have the following matrix and variables:

```c
int mat[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
int numero_linhas = 3;
int numero_colunas = 4;
int indice_menor;
```

The algorithm should calculate the sum of each row and determine that the first row (index 0) has the lowest sum and store this index in `indice_menor`.

```c
indice_menor = 0; // The first row has the lowest sum
```

Now, you can implement the code to achieve this.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle11/Exercises/E43/E43.c).