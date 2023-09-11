# Activity 13 - Calculation of Roots of a Quadratic Equation

![C](https://img.shields.io/badge/c-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this challenge, you should create a C procedure that calculates the real roots of a quadratic equation, having as parameters the coefficients a, b, and c of the equation.

The standard quadratic equation is given by:

```
ax^2 + bx + c = 0
```

To calculate the real roots of this equation, you can use the Bhaskara's formula:

```
x1 = (-b + sqrt(b^2 - 4ac)) / (2a)
x2 = (-b - sqrt(b^2 - 4ac)) / (2a)
```

The procedure should calculate the roots x1 and x2 based on the coefficients a, b, and c and display or return these values.

Now, you can implement the procedure based on the information provided above. Ensure that the procedure calculates the real roots correctly and handles cases where the roots can be complex (when the discriminant is negative).

## Programming Language

The procedure should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle8/Challenges/T13/T13.c)