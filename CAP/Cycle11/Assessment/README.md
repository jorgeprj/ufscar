# CAP Assessment - Cycle 11

![C](https://img.shields.io/badge/c-DA1F26?style=for-the-badge&logo=c&logoColor=white)

**General Instructions:**
- The assessment consists of 3 questions.
- Use the specified programming language for each question.
- Follow best programming practices, such as naming variables clearly and providing readable output messages.
- You may use calculators or programming IDEs as needed.

## Question 1
Declare a matrix with the following characteristics:
- The variable should be named mat;
- The base type should be double;
- It should have 3 rows and 2 columns;
- The matrix should be initialized with the following values:

|   |   |
|---|---|
| 1.6 | 2.5 |
| 3.4 | 4.3 |
| 5.2 | 6.1 |

## Question 2

Consider an existing matrix with the following characteristics:
- The variable identifier is `mat`;
- It has a base type of `int`;
- It has dimensions `rows×columns`, both of which are integer values;
- All its values are already pre-filled.

Write the necessary commands to transpose the matrix, considering that it will always be a square matrix (i.e., `rows=columns`).

**Instructions:**
- Declare any auxiliary variables you may need.
- Do not use an auxiliary matrix; only swap the elements in the same matrix.
(You will likely encounter a segmentation fault error if you try to declare another matrix.)

## Question 3

Write a function that returns the average of all values in a matrix declared as follows:

```c
int matrix[SIZE][SIZE];
```

The value of `SIZE` is already predefined using `#define`.

The function should:
- Have the name `average`;
- Have the matrix as its first parameter;
- Have the number of rows and number of columns to be considered as its other two parameters;
- Return the average as a `double` value as the function's return value.

**Example:**

Input:
```c
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int rows = 3;
int columns = 3;
double result = average(matrix, rows, columns);
printf("%.2lf\n", result); // The output will be '5.00'
```

Output:
```
5.00
```

## General Notes
- Be sure to carefully follow the instructions for each question.
- Provide clear messages to the user and present results legibly.
- Use the programming language specified in each question.

## Link to the Resolved Assessment

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle11/Assessment/A11.md).