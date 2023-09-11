# Exercise 42 - Calculating the Average of a Matrix Column

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you need to write the code to calculate the average of the values in one column of a matrix.

Consider the following:

- The matrix is named `mat` and has already been declared and filled with values.
- The dimensions of the matrix are defined in two existing variables: `numero_linhas` (number of rows) and `numero_colunas` (number of columns), both of type `int`.
- The column to be used for the average is indicated by the variable `coluna`, which already contains the desired value.
- The average value must be placed in a variable named `media_coluna`, which needs to be declared.
- Your code should not produce any output; it should only ensure that the average is stored in the indicated variable.

## Example

Suppose you have the following matrix and variables:

```c
int mat[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
int numero_linhas = 3;
int numero_colunas = 4;
int coluna = 2;
double media_coluna;
```

The algorithm should calculate the average of the third column (column 2) of the matrix and store the result in `media_coluna`.

```c
media_coluna = // The average of the third column ((3 + 7 + 11) / 3) should be stored in media_coluna
```

Now, you can implement the code to achieve this.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle11/Exercises/E42/E42.c).