# CAP Assessment - Cycle 4

![C](https://img.shields.io/badge/c-DA1F26?style=for-the-badge&logo=c&logoColor=white)

**General Instructions:**
- The assessment consists of 2 questions.
- Use the specified programming language for each question.
- Follow best programming practices, such as naming variables clearly and providing readable output messages.
- You may use calculators or programming IDEs as needed.

## Question 1

A point in a Cartesian coordinate system is defined as the horizontal distance and vertical distance from it to the origin. In other words, the point (3,4) is 3 units away from the origin horizontally and 4 units away from the origin vertically.

A point in a polar coordinate system is defined by the distance d from the origin and the angle of the half-line relative to one of the axes originating from the reference point. The fixed reference point is called the pole, and the half-line is called the polar axis. In the figure, the angle (θ) is measured relative to the x-axis.

You should create a C program that reads two values, x and y, that form a point in the Cartesian coordinate system and then presents the values representing the same point in polar coordinates.

The values should be read in the following order: first the value x (on one line) and then the value y (on another line). Since the program will be automatically graded, you should not display any prompts for input or output. The presentation of the answer should be the distance first (on one line) and then the angle in degrees (on another line). Use the formatting `%5.2f` for printing real numbers.

Your program should read the Cartesian coordinate values as real numbers (positive, negative, or zero) and provide the angle in degrees.

For your calculations, consider ```PI = 3.141592```

Remember that angle operations are performed in radians, but the information should be printed in degrees.

**Example:**
```
> 0
> 2
> 2.00
> 90.00
```

## Question 2

A point in a Cartesian coordinate system is defined as the horizontal distance and vertical distance from it to the origin. In other words, the point (3,4) is 3 units away from the origin horizontally and 4 units away from the origin vertically.

A point in a polar coordinate system is defined by the distance d from the origin and the angle of the half-line relative to one of the axes originating from the reference point. The fixed reference point is called the pole, and the half-line is called the polar axis. In the figure, the angle (θ) is measured relative to the x-axis.

You should create a C program that reads two values D and Theta that form a point in polar coordinates and then presents the values that represent the same point in Cartesian coordinates. Basically, it's the inverse of the other exercise.

The values should be read in the following order: first the value D (on one line) and then the value Theta (on another line). Since the program will be automatically graded, you should not display any prompts for input or output. The presentation of the answer should be the x-coordinate first (on one line) and then the y-coordinate (on another line). Use the formatting `%5.2f` for printing real numbers.

Your program should read the polar coordinate values as real numbers (positive, negative, or zero) and provide the Cartesian coordinates as real numbers. The angle should be reported in degrees and, obviously, should be converted to radians for the calculations.

For your calculations, consider ```PI = 3.141592```

**Example:**
```
> 2
> 90
> 0.00
> 2.00
```

## General Notes
- Be sure to carefully follow the instructions for each question.
- Provide clear messages to the user and present results legibly.
- Use the programming language specified in each question.

## Link to the Resolved Assessment

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle4/Assessment/A4.md).