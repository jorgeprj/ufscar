# CAP Assessment - Cycle 2

![VisuAlg](https://img.shields.io/badge/VisuAlg-1575F9?style=for-the-badge&logoColor=white)

**General Instructions:**
- The assessment consists of 4 questions.
- Use the specified programming language for each question.
- Follow best programming practices, such as naming variables clearly and providing readable output messages.
- You may use calculators or programming IDEs as needed.

## Question 1

Develop an algorithm to calculate the amount to be paid for a product, considering the regular price tag and the chosen payment method. Use the following codes to determine the payment method chosen by the consumer. The algorithm should read the price tag and the payment method code and inform the amount to be paid by the consumer.

| Code | Payment Method         | Offered Condition                 |
| ---- | ---------------------- | --------------------------------- |
| 1    | Cash or Check Payment  | 15% discount                      |
| 2    | Debit Card Payment     | 12% discount                      |
| 3    | Credit Card Payment    | 5% discount                       |
| 4    | 2 Installments         | Regular price tag                 |
| 5    | 3 Installments         | Price tag + 10% interest          |
| 6    | 4 Installments         | Price tag + 15% interest          |


**Instructions:**
- The algorithm should prompt the user to enter the price tag and the payment method code.
- Calculate the amount to be paid based on the payment method code and the specified conditions.
- Present the result clearly to the user.

## Question 2

During the coronavirus pandemic, there is much discussion about the trend in new cases or deaths based on the analysis of the moving averages of the last 7 days compared to the moving average of the last 14 days. To calculate the moving average of the last 7 days, simply sum the number of cases or deaths for the day with the previous 6 days. To determine the trend, you need to calculate the percentage change in moving averages over a 14-day period. For example, the moving average on day 14 should be compared to the moving average on day 1. If this percentage is up to 15%, it is considered stable. If it is above 15% positive, it is in growth. If it is more than 15% negative, it is in decline.

Given the explanations, create an algorithm that reads the moving average of the day and the moving average from 14 days ago and informs the trend (stable, growth, or decline).

**Instructions:**
- The algorithm should prompt the user to provide the moving average of the day and the moving average from 14 days ago.
- Calculate the percentage change between the moving averages and determine the trend based on the specified conditions.
- Present the trend clearly to the user.


## Question 3

Animals are divided into two groups: vertebrates and invertebrates. Vertebrate animals have an internal skeleton. There are 5 types of vertebrates: mammals, birds, reptiles, fish, and amphibians. In contrast, invertebrates are animals without an internal skeleton, such as slugs, mollusks, and insects.

Create an algorithm that, given a type of animal, informs whether it is vertebrate or invertebrate.

**Instructions:**
- The algorithm should prompt the user to provide the type of animal.
- Determine if the animal is vertebrate or invertebrate based on the information provided.
- Present the result clearly to the user.

## Question 4

Flat geometric figures can be classified according to the number of sides:

- Triangle        -        3 sides
- Quadrilateral     –        4 sides
- Pentagon        –        5 sides
- Hexagon         –        6 sides
- Heptagon        –        7 sides
- Octagon         –        8 sides
- Nonagon         –        9 sides
- Decagon         –       10 sides
- Undecagon       –       11 sides
- Dodecagon       –       12 sides
- Pentadecagon    –       15 sides
- Icosagon        –       20 sides

Create an algorithm that, given a number of sides greater than 0, informs which geometric figure can be formed. If it is not possible to form a geometric figure or there is no classification for it, the algorithm should provide a clarification message. If the user enters zero or a negative number, a specific message should be presented.

**Instructions:**
- The algorithm should prompt the user to provide the number of sides.
- Determine which geometric figure can be formed based on the provided information.
- Present the result clearly to the user.


## General Notes
- Be sure to carefully follow the instructions for each question.
- Provide clear messages to the user and present results legibly.
- Use the programming language specified in each question.

## Link to the Resolved Assessment

To see the solution to this problem implemented in VisuAlg, [click here](/2020_2/CAP/Cycle2/Assessment/A2.md).