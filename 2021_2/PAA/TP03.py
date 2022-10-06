"""
  Data que foi realizado: 26/04/2022
  Projeto e Análise de Algoritmos
    Terceiro Trabalho Prático - Baú da Felicidade
      Nome: Jorge Luiz Medeiros Pires
      RA: 790942
"""



def minDiffernce(arr, n):
    total_sum = sum(arr)
    memo = [[False for j in range((total_sum // 2) + 1)] for i in range(n + 1)]
    for i in range(len(memo)):
        memo[i][0] = True
    for i in range(1, len(memo)):
        for j in range(1, len(memo[0])):
            if arr[i - 1] <= j:
                memo[i][j] = memo[i - 1][j - arr[i - 1]] or memo[i - 1][j]
            else:
                memo[i][j] = memo[i - 1][j]

    min_diff = float('inf')
    for i in range(len(memo[0]) - 1, -1, -1):
        if memo[-1][i]:
            min_diff = min(min_diff, abs(total_sum - (2 * i)))
            return min_diff


entrada = input()
with open(entrada) as file:
    for line in file:
        numbers = line.split()
        coins = list(map(int, numbers[1:]))

        coins.sort()
        if len(coins) > 0:
                print(minDiffernce(coins, len(coins)))