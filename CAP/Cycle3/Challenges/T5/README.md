# Activity 5 - Square Root Calculation using the Newton's Method

![VisuAlg](https://img.shields.io/badge/VisuAlg-1575F9?style=for-the-badge&logoColor=white)

## Problem Description

The famous Newton's Method is a technique for finding approximations to the roots of numerical equations. In this challenge, you should implement an algorithm to calculate the square root of a positive real number using the Newton's Method. The goal is to find a root R that results in an error less than 0.01.

The equation we want to solve is: x^2 - a = 0, where 'a' is the real number for which we want to calculate the square root.

The Newton's Method tells us that the next approximation of the root (x_(k+1)) can be calculated as follows:

```
x_(k+1) = x_k - (x_k^2 - a) / (2 * x_k)
```

Now, you can implement the algorithm based on the information provided above. Make sure your code is capable of finding the square root with an error less than 0.01 and compare your results with the pre-defined mathematical function for calculating the square root.

**Tip:** You can use a loop to repeat the process until the error is less than 0.01. Remember to choose a suitable initial value for x_0.

## Link to the Resolved Problem

To see the solution to this problem, [click here](/2020_2/CAP/Cycle3/Challenges/T5/T5.alg).