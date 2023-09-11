# Activity 12 - Sine Calculation using Taylor Series

![C](https://img.shields.io/badge/c-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this challenge, you should create a C program that calculates the value of the sine function (sin(x)) using the Taylor Series. The Taylor Series for sine is given by:

```
sin(x) = x - (x^3/3!) + (x^5/5!) - (x^7/7!) + ...
```

To calculate the sine, you should create a function called `calculateSine` that will take an angle in degrees as input and return the value of the sine of that angle. This function should call at least three other functions:

a) A function to reduce the angle to a value between 0 and 2π (i.e., between 0 and 360 degrees).
b) A function to convert degrees to radians, as the Taylor Series requires angles in radians.
c) A function to calculate the factorial of a number.

You should implement these three helper functions and use them in the `calculateSine` function to calculate the sine value.

Now, you can implement the program based on the information provided above. Ensure that the program performs the necessary conversions from degrees to radians, calculates the factorial, and uses the Taylor Series to calculate the sine with accuracy.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle7/Challenges/T12/T12.ce).