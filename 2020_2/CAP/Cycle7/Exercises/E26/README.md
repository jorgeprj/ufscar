# Exercise 26 - Euclidean Distance Calculation

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you are tasked with creating a C program that defines a function to calculate and return the Euclidean distance between two points represented as (x1, y1) and (x2, y2). All numbers and return values should be of type float.

The algorithm should follow these steps:

1. Implement a function called `calculateEuclideanDistance` that receives the coordinates of two points (x1, y1) and (x2, y2) as arguments.
2. Calculate the Euclidean distance using the formula: 

   ```
   distance = sqrt((x2 - x1)^2 + (y2 - y1)^2)
   ```

   Ensure that you include the math library to access the `sqrt` function.
3. The `calculateEuclideanDistance` function should return the calculated distance as a float value.
4. Display the calculated distance to the user.

Ensure that the `calculateEuclideanDistance` function correctly calculates the Euclidean distance between the provided points.

## Example

Suppose the user provides the following points:

- Point 1: (3.0, 2.0)
- Point 2: (6.0, 5.0)

The algorithm should calculate and display:

```
Euclidean Distance: 3.605551275463989
```

Therefore, the algorithm informs the user about the calculated Euclidean distance between the two points.

Now, you can implement the program with the `calculateEuclideanDistance` function to calculate and display the distance.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle7/Exercises/E26/E26.c).