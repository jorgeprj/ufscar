import math
T = 0.234

def f(t, x):
    return t * math.exp(x**2)  # Substitua pela sua função f(t, x)

def runge_kutta4(h, T):
    n = int(T / h)
    x = 1.0
    for i in range(n):
        tk = i * h
        xi = x
        xi1 = xi + h/2 * f(tk, xi)
        xi2 = xi + h/2 * f(tk + h/2, xi1)
        xi3 = xi + h * f(tk + h/2, xi2)
        xi4 = xi + h * f(tk + h, xi3)
        x = xi + h/6 * (f(tk, xi) + 2*f(tk + h/2, xi1) + 2*f(tk + h/2, xi2) + f(tk + h, xi3))
    return x

# Método de Runge-Kutta de ordem 4
n_rk4 = 1
x_rk4_prev = runge_kutta4(T / n_rk4, T)
x_rk4_next = runge_kutta4(T / (n_rk4 + 1), T)
while round(x_rk4_prev, 8) != round(x_rk4_next, 8):
    n_rk4 += 1
    x_rk4_prev = x_rk4_next
    x_rk4_next = runge_kutta4(T / (n_rk4 + 1), T)

print("\nMétodo de Runge-Kutta de ordem 4:")
print("x(T) =", round(x_rk4_next, 8))
print("n =", n_rk4)
