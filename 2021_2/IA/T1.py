import numpy as np
import random as rd


#Matriz das distâncias Pseudoaleatórias
d = np.zeros((6, 6), dtype=np.int16) #Cria a Matriz (6x6) das distancias

for l in range(0, 6): #Preenche a Matriz
    for c in range(0, 6):
        if c < l:
            d[l][c] = rd.randint(1,10)
            d[c][l] = d[l][c]
print(d)

#População Inicial
num_individuos = 16
populacao_inicial = np.zeros((num_individuos, 7), dtype=np.int16)


for i in range(num_individuos):
    aux = rd.sample(range(1, 6), 5)
    for j in range(1, 6):
        populacao_inicial[i][j] = aux[j-1]


print(populacao_inicial)

#Fitness
def fitness(ind):#Soma final das distancias
    soma = 0
    f = 0
    for i in range(len(ind)-1):
        x = ind[i]
        y = ind[i+1]
        soma = soma + d[y][x]
    return soma

#Valor do Fitness
def retorna_fitness(populacao):
    fit = []
    for i in range(num_individuos):
        f = fitness(populacao[i])
        fit.append(f)

    return fit

#Seleção Torneio
def selecao_torneio(fitnesses):
    ind1 = -1
    ind2 = -1

    while ind1 == ind2:
        # Torneio 1
        sorteados = rd.sample(range(0, num_individuos), 2)
        if fitnesses[sorteados[0]] < fitnesses[sorteados[1]]:
            ind1 = sorteados[0]
        else:
            ind1 = sorteados[1]

        # Torneio 2
        sorteados = rd.sample(range(0, num_individuos), 2)
        if fitnesses[sorteados[0]] < fitnesses[sorteados[1]]:
            ind2 = sorteados[0]
        else:
            ind2 = sorteados[1]

    return ind1, ind2

#Cruzamento
def cruzamento(ids,populacao):
    ponto = rd.randint(1, 6)

    pai1 = populacao[ids[0]]
    pai2 = populacao[ids[1]]


    filho1 = np.concatenate([pai1[:ponto], pai2[ponto:]])
    filho2 = np.concatenate([pai2[:ponto], pai1[ponto:]])

    return filho1, filho2

#Elitismo
def elitismo(fitnesses):

  id1 = fitnesses.index(min(fitnesses))
  fitnesses.pop(id1)
  id2 = fitnesses.index(min(fitnesses))

  return id1,id2


#Mutação
def mutacao(filhos, taxa):
    for i in range(len(filhos)):
        if rd.random() < taxa:
            pos1 = rd.randint(1, 5)
            pos2 = rd.randint(1, 5)
            aux = filhos[i][pos1]
            filhos[i][pos1] = filhos[i][pos2]
            filhos[i][pos2] = aux

    return filhos

#Main

num_geracoes = 10

for it in range(num_geracoes):
  nova_populacao = np.zeros((num_individuos, 7), dtype=int)
  fit = retorna_fitness(populacao_inicial)
  #print(fit)

  id_melhor = fit.index(min(fit))
  print("MENOR DISTANCIA:", " ".join(map(str, populacao_inicial[id_melhor])), fit[id_melhor])
  print()

  elite = elitismo(fit.copy())
  nova_populacao[0] = populacao_inicial[elite[0]]
  nova_populacao[1] = populacao_inicial[elite[1]]

  num_filhos = 2
  while num_filhos < num_individuos:
    okay = 0
    while okay == 0:
        ind_vencedores = selecao_torneio(fit)
        filhos = cruzamento(ind_vencedores, populacao_inicial)
        filho1 = sorted(filhos[0])
        filho2 = sorted(filhos[1])
        for c in range(1, 6):
            if filho1[c] == filho1[c + 1] or filho2[c] == filho2[c + 1]:
                okay = 0
                break
            else:
                okay = 1
        filhos = mutacao(filhos, 0.5)


    nova_populacao[num_filhos] = filhos[0]
    nova_populacao[num_filhos+1] = filhos[1]
    num_filhos = num_filhos + 2

  populacao_inicial = nova_populacao.copy()
  