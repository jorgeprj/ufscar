import math

# Parâmetros
a = 0.2
b = 0.58
h = 0.1
t_max = 0.6

# Condições iniciais
t = 0
x = 1

# Lista para armazenar os resultados
results = [(t, x)]

# Aplicando o Método de Euler
while t < t_max:
    x_prime = a * x**2 - b * math.sin(t)
    x = x + h * x_prime
    t = t + h
    results.append((t, x))

# Imprimindo os resultados com alta precisão
for t, x in results:
    print(f"t = {t:.12f}, x = {x:.12f}")
