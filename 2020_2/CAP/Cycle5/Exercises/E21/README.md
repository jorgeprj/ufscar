# Exercise 21 - Calculating Body Mass Index (BMI)

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you are tasked with creating a C program to calculate the Body Mass Index (BMI) of an adult person and print their condition based on the following table:

| BMI in Adults | Condition          |
|---------------|--------------------|
| Below 18.5    | Underweight        |
| 18.5 to 25    | Normal Weight      |
| 25 to 30      | Overweight         |
| Above 30      | Obese              |

The BMI is calculated using the formula:

```
BMI = weight / (height * height)
```

The algorithm should follow these steps:

1. Read the weight (in kilograms) from the user as input.
2. Read the height (in meters) from the user as input.
3. Calculate the BMI using the provided formula.
4. Determine the person's condition based on the calculated BMI according to the table above.
5. Display the calculated BMI and the corresponding condition to the user.

Make sure to handle the conditions as per the table mentioned above.

## Example

Suppose the user provides the following information:

- Weight: 70 kg
- Height: 1.75 m

The algorithm should calculate and display:

```
Weight: 70 kg
Height: 1.75 m
BMI: 22.86
Condition: Normal Weight
```

Therefore, the algorithm informs the user about their calculated BMI and condition based on the provided weight and height.

Now, you can implement the program to calculate and display the BMI and condition based on the provided information.

## Programming Language

The program should be implemented in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle5/Exercises/E21/E21.c).
