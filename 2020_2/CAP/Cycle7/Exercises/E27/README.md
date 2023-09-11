# Exercise 27 - Calculating Different Averages

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you are tasked with creating a C program that defines a function to calculate and return different types of averages based on three input grades (float) and a letter. 

The algorithm should follow these steps:

1. Implement a function called `calculateAverage` that receives three grades as floats (grade1, grade2, grade3) and a letter as arguments. The letter can have one of three possible values: 'A', 'P', or 'H'.
2. Depending on the letter received, calculate and return different types of averages:
   - If the letter is 'A', calculate and return the arithmetic mean (average) of the three grades.
   - If the letter is 'P', calculate and return the weighted mean (average) of the three grades with weights 5, 3, and 2, respectively.
   - If the letter is 'H', calculate and return the harmonic mean of the three grades.
3. Display the calculated average to the user.

Ensure that the `calculateAverage` function correctly calculates the requested type of average based on the provided grades and letter.

## Example

Suppose the user provides the following values:

- Grade 1: 7.0
- Grade 2: 8.0
- Grade 3: 6.5
- Letter: 'A'

The algorithm should calculate and display:

```
Arithmetic Mean: 7.166666666666667
```

Therefore, the algorithm informs the user about the calculated arithmetic mean of the provided grades.

Now, you can implement the program with the `calculateAverage` function to calculate and display the requested type of average.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle7/Exercises/E27/E27.c).