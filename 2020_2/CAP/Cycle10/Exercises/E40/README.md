# Exercise 40 - Removing an Item from an Array

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you need to write a C procedure with the following specification:

- Name: `remova_item`
- Return Type: `void`
- Parameters (in this order):
  - A reference to an array of integers, where there are no repetitions.
  - A reference to the length of the array (an integer).
  - The value of an item (an integer) to be removed.

Description:
- The item must be searched for in the array, and if found, it should be removed.
- Removal should be done by copying the last element of the array over the item, and the array should be reduced by one unit, excluding the last position.
- If the item is not found, the array should remain unchanged.

You need to implement the procedure `void remova_item(int *vet, int *comprimento, int item)` to achieve this.

## Example

Suppose you have the following array:

```c
int vet[] = {5, 2, 7, 1, 8};
int comprimento = 5;
int item = 1;
```

The algorithm should search for the item (1) in the array and remove it:

```c
remova_item(vet, &comprimento, item); // The array vet should become {5, 2, 7, 8}, and comprimento should become 4
```

After executing the `remova_item` procedure, the item (1) is removed from the array, and the length of the array is reduced by one unit.

Now, you can implement the `remova_item` procedure to achieve this.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle10/Exercises/E40/E40.c).