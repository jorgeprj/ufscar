# CAP Assessment - Cycle 6

![C](https://img.shields.io/badge/c-DA1F26?style=for-the-badge&logo=c&logoColor=white)

**General Instructions:**
- The assessment consists of 2 questions.
- Use the specified programming language for each question.
- Follow best programming practices, such as naming variables clearly and providing readable output messages.
- You may use calculators or programming IDEs as needed.

## Question 1

Soon, we will have another Olympic competition: the Tokyo Olympics. One of the competitions that captures the attention of spectators is the 4 x 400 relay. Each lane has a team with 4 competitors, and each team has a baton that must be passed to a teammate after 400m of running. So, the first runner starts with the baton and, after 400m, passes it to the second runner, and so on. Of course, the average speed of each runner on the same team can be different from the average speeds of their teammates!

Imagine that for one of the competitions, there are X teams (a minimum of 4 and a maximum of 8), and only one of them qualifies for the next round. The qualifying team is the one whose fourth runner crosses the finish line first (1,600m). Your program should indicate which team will qualify for the next round. You will need to read the average speeds of each runner (starting with team 1's runners and ending with team 4's runners). Within each team, the speeds read will be for runner 1, runner 2, runner 3, and runner 4, respectively. The average speeds are in km/h.

Therefore, your program should first read the number of teams (X) and then the speeds of the runners. Afterward, it should simulate their race and present the result, which should be the order of the teams that crossed the finish line, with the first team being the one that crossed first and the last team being the one that crossed last.

**Example:**

Input:
```
4
20 18 22 19
21 20 23 18
19 24 20 21
22 19 18 23
```

Output:
```
1 4 3 2
```

In this example:

- There are 4 teams.
- The first team has the speeds of the four runners: 20 km/h, 18 km/h, 22 km/h, and 19 km/h.
- The second team has the speeds of the four runners: 21 km/h, 20 km/h, 23 km/h, and 18 km/h.
- The third team has the speeds of the four runners: 19 km/h, 24 km/h, 20 km/h, and 21 km/h.
- The fourth team has the speeds of the four runners: 22 km/h, 19 km/h, 18 km/h, and 23 km/h.

After simulating the race, the output indicates the order of teams that crossed the finish line, from first to last. In this case, team 1 crossed first, followed by team 4, then team 3, and finally team 2.

### Input
The program should first read the number of teams (X) and then read the speeds of the runners. Within each team, the speeds are provided for runner 1, runner 2, runner 3, and runner 4, respectively.

### Output
The program should output the order of teams that crossed the finish line, with the first team being the one that crossed first and the last team being the one that crossed last.

**Instructions:**

1. Think about the criteria that define a winner.
2. Use data structures to assist in solving the problem.
3. Use functions and procedures when possible to aid in solving the problem.
4. Remember that team numbering starts at 1.
5. Comment your code.

## Question 2

Imagine the following scenario: three cyclists made a bet in which each of them starts from a different place and travels along a straight avenue, all starting at the same time from their positions and moving in the same direction. The first cyclist will always start farther back and will have a higher speed than the other two. The second cyclist will start in a position between the first cyclist and the third cyclist and will have an intermediate speed. The third cyclist will start farther ahead of the other two but will have a lower speed than the other two. With these characteristics, at some point, a certain cyclist will overtake at least one of the other two.

Create a program that reads 3 initial positions in ascending order (mandatory) and 3 decreasing speeds (mandatory) and checks every second (yes, time will be in seconds, and therefore, speeds will be in m/s, and initial positions will be in meters) if there has been any overtaking. When an overtaking occurs, the program should present a response and terminate. The response will have the following format:

```
T = xxxx
Cyclist 1 = xx.xx
Cyclist 2 = xx.xx
Cyclist 3 = xx.xx
```

Where T will be the elapsed time in seconds, and the information about the cyclists will be the positions they reached until an overtaking occurred.

**Example:**

Input:
```
100 200 300
10 9 8
```

Output (when overtaking occurs):
```
T = 10
Cyclist 1 = 100.00
Cyclist 2 = 190.00
Cyclist 3 = 280.00
```

### Input
The program should read 3 initial positions in ascending order and 3 decreasing speeds.

### Output
The program should output the time elapsed and the positions reached by each cyclist until an overtaking occurs.

**Instructions:**

1. There should be no messages before reading the values of the initial positions of each cyclist or the speeds of each cyclist. The code will be automatically graded by the system, and any written message will be considered in the evaluation.
2. Format the time as follows: %4d, and format the positions of the cyclists as follows: %5.2f.

## General Notes
- Be sure to carefully follow the instructions for each question.
- Provide clear messages to the user and present results legibly.
- Use the programming language specified in each question.

## Link to the Resolved Assessment

To see the solution to this problem implemented in C, [click here](/2020_2/CAP/Cycle6/Assessment/A6.md).