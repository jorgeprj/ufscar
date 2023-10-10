def f(x):
    return 1.001 * x**5 + 3.009 * x**2 - 0.992 * x + 1.10

def f_prime(x):
    return 5 * (1.001 * x**4) + 2 * (3.009 * x) - 0.992

def newton_method(x0):
    x = x0
    k = 0
    while True:
        x_next = x - f(x) / f_prime(x)
        k += 1
        if round(x_next, 8) == round(x, 8):
            return k-1, x_next
        x = x_next

# Chamar a função newton_method com x0 = 0
iterations, x_k = newton_method(0)

print("Número de iterações: ", iterations)
print("Valor de xK: ", x_k)