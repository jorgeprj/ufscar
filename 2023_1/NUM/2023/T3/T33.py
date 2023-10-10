import numpy as np

def truncate(x):
    return int(x* 10**3) / 10**3

def catenaria(x0, y0, x1, y1, ele, c0, a0, h0, lim):
    
    def f1(c, a, h):
        return (np.cosh(c * (x0 - a)) / c) + h - y0
    
    def f2(c, a, h):
        return (np.cosh(c * (x1 - a)) / c) + h - y1
    
    def f3(c, a, h):
        return (np.sinh(c * (x1 - a)) - np.sinh(c * (x0 - a))) / c - ele
    
    def f1c(c, a, h):
        return (c * np.sinh(c * (x0 - a)) * (x0 - a) - np.cosh(c * (x0 - a))) / (c ** 2)
    
    def f2c(c, a, h):
        return (c * np.sinh(c * (x1 - a)) * (x1 - a) - np.cosh(c * (x1 - a))) / (c ** 2)
    
    def f3c(c, a, h):
        return (
            c * x1 * np.cosh(c * (x1 - a))
            - c * a * np.cosh(c * (x1 - a))
            - np.sinh(c * (x1 - a))
            + c * a * np.cosh(c * (x0 - a))
            - c * x0 * np.cosh(c * (x0 - a))
            + np.sinh(c * (x0 - a))
        ) / (c ** 2)
    
    def f1a(c, a, h):
        return -np.sinh(c * (x0 - a))
    
    def f2a(c, a, h):
        return -np.sinh(c * (x1 - a))
    
    def f3a(c, a, h):
        return np.cosh(c * (x0 - a)) - np.cosh(c * (x1 - a))
    
    def f1h(c, a, h):
        return 1
    
    def f2h(c, a, h):
        return 1
    
    def f3h(c, a, h):
        return 0
    
    ci = []
    ai = []
    hi = []
    
    ci.append(c0)
    ai.append(a0)
    hi.append(h0)
    
    for i in range(1, lim + 2):
        DFx = np.array(
            [
                [f1c(ci[i - 1], ai[i - 1], hi[i - 1]), f1a(ci[i - 1], ai[i - 1], hi[i - 1]), f1h(ci[i - 1], ai[i - 1], hi[i - 1])],
                [f2c(ci[i - 1], ai[i - 1], hi[i - 1]), f2a(ci[i - 1], ai[i - 1], hi[i - 1]), f2h(ci[i - 1], ai[i - 1], hi[i - 1])],
                [f3c(ci[i - 1], ai[i - 1], hi[i - 1]), f3a(ci[i - 1], ai[i - 1], hi[i - 1]), f3h(ci[i - 1], ai[i - 1], hi[i - 1])],
            ]
        )
    
        xk = np.array([ci[i - 1], ai[i - 1], hi[i - 1]])
    
        Fxk = np.array([f1(ci[i - 1], ai[i - 1], hi[i - 1]), f2(ci[i - 1], ai[i - 1], hi[i - 1]), f3(ci[i - 1], ai[i - 1], hi[i - 1])])
    
        A = DFx
        b = np.dot(DFx, xk) - Fxk
    
        x = np.linalg.solve(A, b)
    
        ci.append(x[0])
        ai.append(x[1])
        hi.append(x[2])
        
        if i == lim-2:
            print(f'\nc = {truncate(ci[-1])}')
            print(f'a = {truncate(ai[-1])}')
            print(f'h = {truncate(hi[-1])}')

'''x0 = -2.9
y0 = 2.2

x1 = 2.4
y1 = 1.4

comprimento = 5.87'''

x0 = float(input("x0: "))
y0 = float(input("y0: "))
x1 = float(input("x1: "))
y1 = float(input("y1: "))
comprimento = float(input("comprimento: "))

# Não mexe no resto
c0 = 1
a0 = 0
h0 = 0
lim = 100

catenaria(x0, y0, x1, y1, comprimento, c0, a0, h0, lim)