# Exercise 46 - Identifying Identity Matrix

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

Write a C function that returns 1 (true) if a given matrix is an identity matrix or 0 (false) otherwise. A matrix is an identity matrix when:

- It is square.
- All elements on the main diagonal are equal to 1.
- All elements outside the main diagonal are equal to 0.

The function will be called with the following command:

```c
if (identidade(mat, linhas, colunas))
    printf("identity");
else
    printf("not identity");
```

When writing your function, assume that the matrix has been declared in this way:

```c
double mat[LINHAS][COLUNAS];
```

## Function Signature

```c
int identidade(double mat[LINHAS][COLUNAS], int LINHAS, int COLUNAS);
```

## Example

Suppose you have the following matrix declaration and variables:

```c
double mat[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
int LINHAS = 3;
int COLUNAS = 3;
```

You should call the `identidade` function as follows:

```c
if (identidade(mat, LINHAS, COLUNAS))
    printf("identity");
else
    printf("not identity");
```

In this case, the function will return 1 (true), indicating that the matrix is an identity matrix, and "identity" will be printed.

Now, you can implement the `identidade` function to identify an identity matrix.

## Programming Language

The function should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle11/Exercises/E46/E46.c).