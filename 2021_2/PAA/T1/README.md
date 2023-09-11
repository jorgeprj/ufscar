# Practical Activity: DNA Sequences
## Introduction
In the first Practical Work (TP01), you will be required to submit a program that solves the problem presented in the next section. The submitted file should follow these guidelines:

- TP01 should be done individually, and plagiarism will not be tolerated.
- TP01 should be submitted on [run.codes](https://run.codes) in a file containing code in one of the following languages (C, C++, Java, Python3) and with a header containing student information (name, course, RA).
- Each student should register on [run.codes](https://run.codes) by providing their Full Name, choosing "UFSCar - Universidade Federal de São Carlos" as the University, and entering their RA in the Nº Matrícula field. After registering, log in to run codes and enroll in the course "25089 - Project and Analysis of Algorithms" using the Enrollment Code JP31.
- If you choose the C language, compile your TP using the GCC compiler with flags -Wall -pedantic -O2 -Wno-unused-result, as warnings may prevent the code from running on run codes, even if it works on your computer.

## Genetics
The geneticists Genésio and Genoveva believe they have discovered a very important property of DNA strings. Specifically, they believe that beings of the same species share a property they called "recursive string equivalence." According to the definition by the GG couple, two strings A and B are equivalent if:

- The strings are identical, or
- By dividing each string in half into two equal parts (A into Ale Ar and B into Ble Br), we have:
  1. Ale is equivalent to Ble and Ar is equivalent to Br, or
  2. Ale is equivalent to Bre and Ar is equivalent to Bl.

In addition to DNA, Genoveva and Genésio believe that this equivalence may be present in other biological character strings. Since they didn't take the PAA course, they don't know how to test the hypothesis. To help them, develop a program that answers whether two strings are equivalent.

### Input
Each instance is stored in a file with the extension ".in." The only line to be read from standard input contains the name of the instance file. This name should be used to read the instance file, which is located in the same folder as the executable.

Each instance contains several test cases. The data for each test case is on a single line, which begins with an integer N (N = 2k, 1 ≤ k ≤ 20), indicating the size of the strings to be analyzed. After that, two strings with N characters each are provided.

The end of input is indicated by a single line with only the number zero.

### Output
For each test case from the input, your program should print a line with the word "YES" if the strings are equivalent or "NO" otherwise.

### Example Input
```
4 aaba abaa
4 ctct cctt
0
```

### Expected Output for this Example
```
YES
NO
```