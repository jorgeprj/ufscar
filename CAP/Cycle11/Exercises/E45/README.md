# Exercise 45 - Filling a Matrix with Zeros

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you need to write a subroutine (function) to fill an integer matrix with zero values.

Assume that the matrix has the following declaration:

```c
double mat[LINHAS][COLUNAS];
```

The variables `LINHAS` and `COLUNAS` indicate the part of the matrix that should be filled with zeros.

## Subroutine Signature

```c
void fillMatrixWithZeros(double mat[LINHAS][COLUNAS], int LINHAS, int COLUNAS);
```

## Example

Suppose you have the following matrix declaration and variables:

```c
double mat[3][3];
int LINHAS = 3;
int COLUNAS = 3;
```

You should call the `fillMatrixWithZeros` subroutine as follows:

```c
fillMatrixWithZeros(mat, LINHAS, COLUNAS);
```

After calling the subroutine, the matrix `mat` should be filled with zeros:

```c
double mat[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
```

Now, you can implement the subroutine to fill a matrix with zeros.

## Programming Language

The subroutine should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle11/Exercises/E45/E45.c).