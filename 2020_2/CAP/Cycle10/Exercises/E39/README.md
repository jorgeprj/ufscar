# Exercise 39 - Shifting the Smallest Element

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you need to write a complete C procedure with the following specification:

- Name: `desloque_menor`
- Return Type: `void`
- Parameters: A reference to an array of integers and its length (an integer)

Description:
- The smallest element in the array should be placed in the first position of the array.
- To preserve the content of the first position, its value should be placed in the same position where the smallest value was.
- None of the other values in the array should be modified.
- The array contains at least one element (comprimento equal to or greater than 1).

You need to implement the procedure `void desloque_menor(int *vet, int comprimento)` to achieve this.

## Example

Suppose you have the following array:

```c
int vet[] = {5, 2, 7, 1, 8};
int comprimento = 5;
```

The algorithm should shift the smallest element to the first position of the array:

```c
desloque_menor(vet, comprimento); // The array vet should become {1, 5, 7, 2, 8}
```

After executing the `desloque_menor` procedure, the smallest element (1) is moved to the first position of the array.

Now, you can implement the `desloque_menor` procedure to achieve this.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle10/Exercises/E39/E39.c).