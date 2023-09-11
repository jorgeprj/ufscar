# Algorithms and Data Structures (AED)

Repository created to store all code projects and works created during graduation. Unfortunately some projects were lost.

## Subject Description

Algorithms and Data Structure is one of the most important subjects of the course, through it we know some fundamental algorithms of data structures. The language chosen was C++.

### Professor
[![Ferrari](https://img.shields.io/badge/Roberto_Ferrari_Junior-%2300599C.svg?style=for-the-badge&logo=GoogleScholar&logoColor=white)](https://site.dc.ufscar.br/docente/5cefcb3648365a001679f7736)

### Language
![C++](https://img.shields.io/badge/c++-DD0031.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)


## Contents
The course was divided into 5 topics:

### Stack
The stack works in such a way that the last element to be inserted will be the first to be withdrawn: ***Last-In/First-Out (LIFO)*** . Thus, a stack allows access to only one data item - the last inserted, called *top*. For this, we use the primitive functions: `push` and `pop`.

For the implementation, two approaches were used: 

* **Static Stack**: the data is in a vector. 
  
    [Class](/2021_1/AED/Stack/StaticStack.h) | [Main](/2021_1/AED/Stack/StaticMain.cpp)

* **Dynamic Stack**: the data is stored in a node.

    [Class](/2021_1/AED/Stack/DynamicStack.h) | [Main](/2021_1/AED/Stack/DynamicMain.cpp)

### Queue
The Queue works in such a way that the first element to be inserted will be the
first to be withdrawn: ***First In First Out (FIFO)***. The primitive functions are: `append` and `serve`.

For the implementation, two approaches were used: 

* **Static Queue**: the data is in a vector. 
  
    [Class](/2021_1/AED/Queue/StaticQueue.h) | [Main](/2021_1/AED/Queue/StaticMain.cpp)

* **Dynamic Queue**: the data is stored in a node.

    [Class](/2021_1/AED/Queue/DynamicQueue.h) | [Main]()

### List

For the implementation, two approaches were used: 

* **Dynamic List**: Linked list from nodes
  
    [Class](/2021_1/AED/List/DynamicList.h) | [Main](/2021_1/AED/List/DynamicListMain.cpp)

* **Double Dynamic List**: inked list from double nodes

   [Class](/2021_1/AED/List/DoubleList.h) | [Main](/2021_1/AED/List/DoubleListMain.cpp)


### Sort
There are several types of sorting algorithms, including: *Insertion Sort*, *Bubble Sort*, *Quick Sort* and *Selection Sort*. Only the last one was implemented.

* [Algorithm](/2021_1/AED/Sort/SelectionSort.cpp)

### Search
There are many types of searching algorithms. For the implementation, two simple approaches were used: 

* **Linear Search**: In linear (sequential) search, we start from the front (beginning) of the vector (or list) of elements and compare each of the elements with the desired element until we find a match (the element is present) or we reach the end of the list (the element is not present).
  
    [Algorithm](/2021_1/AED/Search/LinearSearch.cpp)

* **Binary Search**: In binary search, we start with a guess as to where the sought-after element might be. Our guess is always to choose the middle element of the array. If this guess is correct, the search ends as we have found the element we are looking for. If the guess is wrong, we can restrict our next guess to a specific part of the array, given that it is sorted.

   [Algorithm](/2021_1/AED/Search/BinarySearch.cpp) 

## Final Project

The "PokeBattle Card Game" project was an initiative aimed at applying the concepts of data structures such as Stack, List, and Queue in a practical and enjoyable setting. Unfortunately, the project's repository was deleted, making it impossible to view the complete work, including the graphical aspects. However, the primary goal of the project was to enhance programming skills and gain a deep understanding of the involved data structures.

### Objective
The main objective of this project was to create an interactive Pokémon card game where players had to devise strategies to defeat a powerful adversary known as the "Boss." The focus was not only on the gaming experience itself but also on implementing the mentioned data structures to manage the cards and game events effectively.

### Key Components and Development:

- **Stack:** Pokémon cards were organized into a Stack, representing the players' decks. Players could purchase cards and add new ones to the top of the Stack. Additionally, played cards were stacked to enable the execution of specific effects and abilities.

- **Queue:** The Queue was utilized to control the order of actions in the game. Player turns and Boss actions were managed through a Queue, ensuring fair and sequential gameplay.

   [Algorithm](/2021_1/AED/Project/Source.cpp) 

  ##

<div> 
    <a href="https://github.com/jorgeprj" target="_blank">
        <img src="https://img.shields.io/badge/-Github-000?logo=github&style=for-the-badge&logoColor=white" alt="Badge Github" />
    </a>
    <a href="https://www.linkedin.com/in/jorgeprj" target="_blank">
        <img src="https://img.shields.io/badge/-LinkedIn-0077B5?logo=linkedin&style=for-the-badge&logoColor=white" alt="Badge Linkedin" />
    </a>
    <a href="mailto:jorgeprj2020@gmail.com-">
        <img alt="email" src="https://img.shields.io/badge/jorgeprj2020@gmail.com-D14836?style=for-the-badge&logo=gmail&logoColor=white" />
    </a>
</p>
