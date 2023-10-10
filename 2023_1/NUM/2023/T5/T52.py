import math

def f(x):
    return math.exp(-x**2)

def simpson_integral(a, b, n):
    h = (b - a) / (2 * n)
    sum_odd = 0
    sum_even = 0
    
    for i in range(1, 2 * n):
        x_i = a + i * h
        if i % 2 == 0:
            sum_even += f(x_i)
        else:
            sum_odd += f(x_i)
    
    integral = h/3 * (f(a) + 4*sum_odd + 2*sum_even + f(b))
    return integral

def main():
    a = -1.5
    b = 2.9
    n = 2  # Initial value of n (number of subdivisions)
    precision = 8  # Number of decimal places for convergence
    
    prev_integral = simpson_integral(a, b, n)
    print(f"n = {n}, S(n) = {prev_integral:.{precision}f}")
    
    n *= 2
    current_integral = simpson_integral(a, b, n)
    print(f"n = {n}, S(n) = {current_integral:.{precision}f}")

    while format(prev_integral, f".{precision}f") != format(current_integral, f".{precision}f"):
        prev_integral = current_integral
        n *= 2
        current_integral = simpson_integral(a, b, n)
        print(f"n = {n}, S(n) = {current_integral:.{precision}f}")
    
    print(f"\nIntegral value with at least {precision} decimal places: {current_integral:.{precision}f}")

if __name__ == "__main__":
    main()
