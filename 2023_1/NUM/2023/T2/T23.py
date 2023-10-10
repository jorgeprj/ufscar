import numpy as np
from scipy.optimize import curve_fit

# Definir a função a ser ajustada f(x)
def f(x, a, b):
    return a + b * (x - 1) ** 2

# Definir a função observada y=x^3-3x
def observada(x):
    return x ** 3 - 3 * x

# Definir intervalo e n de pontos
x = np.linspace(-0.3, 0.2, 100000)

# Calcular os valores observados de y
y_observada = observada(x)

# Realizar o ajuste da curva usando o método dos mínimos quadrados
parametros, _ = curve_fit(f, x, y_observada)

# Extrair os valores ajustados para a e b
a, b = parametros

# Imprimir os valores ajustados
print("Valor de a:", round(a, 6))
print("Valor de b:", round(b, 6))