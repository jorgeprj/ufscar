# Practical Activity: Evolutionary Algorithms

## The Traveling Salesman Problem

Suppose a traveling salesman has to visit n different cities, starting and ending his journey in the first city. Suppose, too, that the order in which cities are visited doesn't matter, and the salesman can travel directly from any city to another. The Traveling Salesman Problem consists of finding the route that minimizes the total travel distance.

**Illustrating for the case n = 4:**

If we have four cities 0, 1, 2, and 3, a possible route for the traveling salesman could be:

Start from 0 and go to 1, from 1 go to 2, and then to 3, and finally return to 0.

What are the other possibilities? It's easy to see that there are six possible routes:

- 01230
- 01320
- 02130
- 02310
- 03120
- 03210

## Exercise

The student must create Python code that implements an Evolutionary Algorithm to solve the Traveling Salesman Problem with 6 (six) cities. In the code, the distances between the cities should be generated randomly. The program should find the best route, starting from city 0, passing through all cities, and returning to city 0. The student must define the best way to model individuals representing solutions to the problem and the fitness function. The student should also make their own choices regarding selection, crossover, mutation, and elitism operators. Using ready-made libraries is not allowed.

**Table 1: Example of randomly generated distances**

| City | 0    | 1    | 2    | 3    | 4    | 5    |
|------|------|------|------|------|------|------|
| 0    | 0    | -    | -    | -    | -    | -    |
| 1    | 5    | 0    | -    | -    | -    | -    |
| 2    | 10   | 15   | 0    | -    | -    | -    |
| 3    | 20   | 25   | 30   | 0    | -    | -    |
| 4    | 35   | 40   | 45   | 50   | 0    | -    |
| 5    | 55   | 60   | 65   | 70   | 75   | 0    |
