import numpy as np

def f(x):
    return np.exp(-x**2)

def g0(x):
    return 1

def g1(x):
    return x

def g2(x):
    return x**2 - 1/3

def g3(x):
    return x**3 - 3/5 * x

def g4(x):
    return x**4 - 6/7 * x**2 + 3/35

# Função para estimar a integral usando o método de Simpson
def simpson_integral(func, a, b, n):
    h = (b - a) / n
    x = np.linspace(a, b, n+1)
    integral = h/3 * np.sum(func(x[:-1]) + 4*func((x[:-1] + x[1:])/2) + func(x[1:]))
    return integral

# Estimar as integrais definidas
integral_g0 = simpson_integral(lambda x: f(x) * g0(x), -1, 1, 58)
integral_g1 = simpson_integral(lambda x: f(x) * g1(x), -1, 1, 58)
integral_g2 = simpson_integral(lambda x: f(x) * g2(x), -1, 1, 58)
integral_g3 = simpson_integral(lambda x: f(x) * g3(x), -1, 1, 58)
integral_g4 = simpson_integral(lambda x: f(x) * g4(x), -1, 1, 58)

# Calcular os coeficientes do polinômio de aproximação p(x) usando o método dos mínimos quadrados
A = np.array([[integral_g0, integral_g1, integral_g2, integral_g3, integral_g4],
              [integral_g1, integral_g2, integral_g3, integral_g4, integral_g4],
              [integral_g2, integral_g3, integral_g4, integral_g4, integral_g4],
              [integral_g3, integral_g4, integral_g4, integral_g4, integral_g4],
              [integral_g4, integral_g4, integral_g4, integral_g4, integral_g4]])

b = np.array([simpson_integral(f, -1, 1, 58),
              simpson_integral(lambda x: f(x) * x, -1, 1, 58),
              simpson_integral(lambda x: f(x) * (x**2 - 1/3), -1, 1, 58),
              simpson_integral(lambda x: f(x) * (x**3 - 3/5 * x), -1, 1, 58),
              simpson_integral(lambda x: f(x) * (x**4 - 6/7 * x**2 + 3/35), -1, 1, 58)])

coefficients = np.linalg.solve(A, b)

print("Coeficientes do polinômio de aproximação:")
print("a0:", round(coefficients[0], 10))
print("a1:", round(coefficients[1], 10))
print("a2:", round(coefficients[2], 10))
print("a3:", round(coefficients[3], 10))
print("a4:", round(coefficients[4], 10))