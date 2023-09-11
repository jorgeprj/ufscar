# CAP Assessment - Cycle 10

![C](https://img.shields.io/badge/c-DA1F26?style=for-the-badge&logo=c&logoColor=white)

**General Instructions:**
- The assessment consists of 4 questions.
- Use the specified programming language for each question.
- Follow best programming practices, such as naming variables clearly and providing readable output messages.
- You may use calculators or programming IDEs as needed.

## Question 1

Write the code to declare an array:
- with a base type of ```double```;
- named `vet`;
- with 8 elements.

Along with the declaration, initialize it with the following values:

```
- 17.2, 13.1, -2.25, 0.0, 0.0, 0.0, 0.0, 0.0.
```

## Question 2

Write the code required to create an array following the constraints:
- base type: ```double```;
- name: ```vet```;
- capacity for n elements, where n is a variable that you must declare and read (the name of this variable is irrelevant);
- all positions must be filled with -1.

**Instructions:**
- Assume that n is always greater than zero.
- The array must have exactly n elements.

Certainly! Here's the question in English, along with an example input and output:

## Question 3

Write a C function to check if an array contains both lowercase and uppercase letters (not just one category).

Your function should:
- Have the name `check_case`;
- Have a single parameter, an array of `char`;
- Have the return value of the function as `1` (or `true`) if the test is successful or `0` (or `false`) if it fails.

The input array will exclusively contain letters from A to Z and from a to z. After the sequence of letters, there will always be the character `$`, which should be used to terminate the verification.

To test a single character, there is already a function called `case` that returns `M` if it's uppercase or `m` if it's lowercase.

Example of using the `case` function:

```c
char letter = 'A';
printf("%c\n", case(letter)); // The output will be 'M'
if (case(letter) == 'm')
    printf("lowercase!\n"); // Does not produce output in this example
```

**Example:**

Input:
```c
char array[] = "AbcDefGhIjKlmNopQrStUvWxYz$";
int result = check_case(array);
printf("%d\n", result); // The output will be '1'
```

Output:
```
1
```

## Question 4

Consider the following data structure:

```c
struct info {
    int size;
    int data[MAX_SIZE];
};
```

It stores data in the `data` field, with only the first `size` elements being valid. The remaining elements contain garbage.

Write a function with the following specifications:

- Function name: `change_data`
- Function should be `void` and take a `struct info` by reference
- All valid negative values in the array should be replaced by the smallest value found in the array.

**Example:**

```c
struct info sample_data = {5, {-2, 7, -5, 3, -10}};

change_data(&sample_data);
```

In this example, after calling `change_data`, the `sample_data` structure should be modified to `{5, {-2, 7, -5, 3, -10}}`, with all negative values replaced by the smallest value in the array, which is `-10`.


## General Notes
- Be sure to carefully follow the instructions for each question.
- Provide clear messages to the user and present results legibly.
- Use the programming language specified in each question.

## Link to the Resolved Assessment

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle10/Assessment/A10.md).