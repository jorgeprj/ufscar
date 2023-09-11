# Exercise 33 - Person Data Structure

![C](https://img.shields.io/badge/C-DA1F26?style=for-the-badge&logo=c&logoColor=white)

## Problem Description

In this exercise, you need to create a C data structure that represents the personal characteristics and documents of a person.

The data structure should include the following attributes for personal characteristics:

1. Name (string): The name of the person.
2. Age (integer): The age of the person.
3. Weight (float): The weight of the person.
4. Height (float): The height of the person.

Additionally, it should include attributes for documents:

5. Title of Voter (string): The person's voter ID.
6. RG (string): The person's ID card.
7. CPF (string): The person's taxpayer identification number.

Once you have defined this data structure, you should be able to create instances of people with these attributes and store their personal characteristics and documents.

## Example

Here's an example of how the data structure should look:

```c
struct Person {
    char name[100];
    int age;
    float weight;
    float height;
    char voterId[20];
    char rg[20];
    char cpf[20];
};
```

You can use this structure to create instances of people and store information about their personal characteristics and documents.

Now, you can implement the data structure as described and use it to represent the personal characteristics and documents of a person.

## Programming Language

The data structure should be defined in the C programming language.

## Link to the Resolved Problem

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle9/Exercises/E33/E33.c).