import numpy as np
from scipy.integrate import quad

def truncate(num, n):
    return int(num * 10**n) / 10**n

# Definindo a função f(x)
def f(x):
    return 2.7 * np.cos(x) + 0.6 * np.sin(x)

# Definindo os polinômios ortogonais
def p0(x):
    return 0.5

def p1(x):
    return (2/3) * x

def p2(x):
    return (8/45) * (x**2 - 1/3)

def p3(x):
    return (8/175) * (x**3 - (3/5) * x)

# Função para calcular os coeficientes do polinômio de ajuste
def calcular_coeficientes():
    # Funções dos polinômios ortogonais
    polinomios = [p0, p1, p2, p3]

    # Matriz de projeção
    matriz_projecao = np.zeros((4, 4))
    for i in range(4):
        for j in range(4):
            integrando = lambda x: polinomios[i](x) * polinomios[j](x)
            matriz_projecao[i, j] = quad(integrando, -1, 1)[0]

    # Vetor de projeção
    vetor_projecao = np.zeros(4)
    for i in range(4):
        integrando = lambda x: f(x) * polinomios[i](x)
        vetor_projecao[i] = quad(integrando, -1, 1)[0]

    # Coeficientes
    coeficientes = np.linalg.solve(matriz_projecao, vetor_projecao)
    return coeficientes

# Calculando os coeficientes
coeficientes = calcular_coeficientes()

# Imprimindo os coeficientes
for c in coeficientes:
    print(truncate(c, 6))