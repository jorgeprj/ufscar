# Exercise 32 - Discipline Struct

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you need to create a C data structure that represents the characteristics of university courses' disciplines.

The data structure should include the following attributes:

1. Discipline name (string): The name of the discipline.
2. Professor name (string): The name of the professor who teaches the discipline.
3. Semester (integer): The semester in which the discipline is offered.
4. Number of credits (integer): The number of credits associated with the discipline.

Once you have defined this data structure, you should be able to create instances of disciplines with these attributes.

## Example

Here's an example of how the data structure should look:

```c
struct Discipline {
    char name[100];
    char professor[100];
    int semester;
    int credits;
};
```

You can use this structure to create instances of disciplines and store information about them.

Now, you can implement the data structure as described and use it to represent the characteristics of university disciplines.

## Programming Language

The data structure should be defined in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle9/Exercises/E32/E32.c).