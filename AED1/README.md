# Algorithms and Data Structures (AED)

Repository created to store all code projects and works created during graduation. Unfortunately some projects were lost.

<div> 
    <a href="https://github.com/jorgeprj" target="_blank">
        <img src="https://img.shields.io/badge/-Github-000?logo=github&style=for-the-badge&logoColor=white" alt="Bradge Github" />
    </a>
    <a href="https://www.linkedin.com/in/jorgeprj" target="_blank">
        <img src="https://img.shields.io/badge/-LinkedIn-0077B5?logo=linkedin&style=for-the-badge&logoColor=white" alt="Bradge LinkedIn" />
    </a>
    <a href="mailto:jorgeprj2020@gmail.com-">
        <img alt="eMail" src="https://img.shields.io/badge/jorgeprj2020@gmail.com-D14836?style=for-the-badge&logo=gmail&logoColor=white" />
    </a>
</div>

## Subject Description

The course "Algorithms and Data Structures 1" focuses on the in-depth study of algorithms and data structures, with the C++ programming language as the primary implementation medium. In this course, students enhance their programming skills by exploring complex algorithms, optimization techniques, and advanced data structures. They learn to design efficient solutions for a variety of computational problems, developing a solid understanding of time and space complexities.

### Professor
[![Ferrari](https://img.shields.io/badge/Roberto_Ferrari_Junior-%2300599C.svg?style=for-the-badge&logo=GoogleScholar&logoColor=white)](https://site.dc.ufscar.br/docente/5cefcb3648365a001679f7736)

### Language
![C++](https://img.shields.io/badge/c++-DD0031.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)


## Contents
The course was divided into 5 topics:

### Stack
The stack works in such a way that the last element to be inserted will be the first to be withdrawn: ***Last-In/First-Out (LIFO)*** . Thus, a stack allows access to only one data item - the last inserted, called *top*. For this, we use the primitive functions: `push` and `pop`.
 
**Static Stack** 

The data is in a vector. 
  
- [Class](Stack/StaticStack.h)
  
- [Main](Stack/StaticMain.cpp)

**Dynamic Stack** 

The data is stored in a node.

- [Class](Stack/DynamicStack.h) 
  
- [Main](Stack/DynamicMain.cpp)


### Queue
The Queue works in such a way that the first element to be inserted will be the
first to be withdrawn: ***First In First Out (FIFO)***. The primitive functions are: `append` and `serve`.

**Static Queue** 

The data is in a vector. 
  
- [Class](Queue/StaticQueue.h) 
  
- [Main](Queue/StaticMain.cpp)

**Dynamic Queue**
  
The data is stored in a node.

- [Class](Queue/DynamicQueue.h)

### List
A list is a data structure that organizes elements linearly, allowing the storage and manipulation of multiple items in an ordered sequence, with each element identified by its position or index and capable of holding various data types. Lists are versatile for flexible data storage, enabling insertion, removal, and access of elements based on their positions, making them fundamental in many programming tasks and algorithms.

**Dynamic List**

Linked list from nodes
  
- [Class](List/DynamicList.h) 
  
- [Main](List/DynamicListMain.cpp)

**Double Dynamic List**

Linked list from double nodes

- [Class](List/DoubleList.h)
  
- [Main](List/DoubleListMain.cpp)


### Sort
There are several types of sorting algorithms, including: *Insertion Sort*, *Bubble Sort*, *Quick Sort* and *Selection Sort*. Only the last one was implemented.

**Selection Sort**

- [Algorithm](Sort/SelectionSort.cpp)

### Search
There are many types of searching algorithms. For the implementation, two simple approaches were used: 

**Linear Search** 

In linear (sequential) search, we start from the front (beginning) of the vector (or list) of elements and compare each of the elements with the desired element until we find a match (the element is present) or we reach the end of the list (the element is not present).
  
- [Algorithm](Search/LinearSearch.cpp)

**Binary Search** 

In binary search, we start with a guess as to where the sought-after element might be. Our guess is always to choose the middle element of the array. If this guess is correct, the search ends as we have found the element we are looking for. If the guess is wrong, we can restrict our next guess to a specific part of the array, given that it is sorted.

- [Algorithm](Search/BinarySearch.cpp) 


## Final Project

The ***"PokeBattle Card Game"*** project was an initiative aimed at applying the concepts of data structures such as Stack, List, and Queue in a practical and enjoyable setting. Unfortunately, the project's repository was deleted, making it impossible to view the complete work, including the graphical aspects. However, the primary goal of the project was to enhance programming skills and gain a deep understanding of the involved data structures.

### Objective
The main objective of this project was to create an interactive Pokémon card game where players had to devise strategies to defeat a powerful adversary known as the "Boss." The focus was not only on the gaming experience itself but also on implementing the mentioned data structures to manage the cards and game events effectively.

### Key Components and Development:

**Stack** 

Pokémon cards were organized into a Stack, representing the players' decks. Players could purchase cards and add new ones to the top of the Stack. Additionally, played cards were stacked to enable the execution of specific effects and abilities.

**Queue** 

The Queue was utilized to control the order of actions in the game. Player turns and Boss actions were managed through a Queue, ensuring fair and sequential gameplay.


To view part of the developed code, [click here](Project/Source.cpp) 
