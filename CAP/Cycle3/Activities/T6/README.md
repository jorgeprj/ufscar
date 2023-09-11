# Activity 6 - Approximate Calculation of Sine using Taylor Series

![VisuAlg](https://img.shields.io/badge/VisuAlg-1575F9?style=for-the-badge&logoColor=white)

## Problem Description

In this challenge, you should create an algorithm that calculates the approximate value of the sine function (sin(x)) using the Taylor Series. The Taylor Series for sine is given by:

```
sin(x) = x - (x^3/3!) + (x^5/5!) - (x^7/7!) + ...
```

The symbol ! represents the factorial of a number. It's important to note that we cannot calculate an infinite sum, so you should calculate the first few terms of the series.

The algorithm should follow these steps:

1. Check if the value of 'x' is within the interval (0, 2π) and adjust it if necessary to be in radians.
2. Calculate the terms of the Taylor series up to a certain number of terms (e.g., 5 terms).
3. Show the calculated partial values, i.e., x, x - (x^3/3!), x - (x^3/3!) + (x^5/5!), ...
4. Calculate the real value of the sine function using the mathematical function in the programming language.
5. Compare the results obtained with the mathematical function to calculate the sine.

Now, you can implement the algorithm based on the information provided above. Make sure to calculate the partial values of the Taylor series and compare the result with the mathematical function in the programming language to calculate sine.

## Link to the Resolved Problem

To see the solution to this problem, [click here](/2020_2/CAP/Cycle3/Challenges/T6/T6.alg).