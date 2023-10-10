# Método de Newton com sympy

import numpy as np
import sympy as sp
from fractions import Fraction

x = sp.symbols('x')

# Dados de entrada
t = np.array([-7, -6, -2, 1, 6, 10])
z = np.array([ 1,  0,  3, 5, 8, 10])

# Funções das interpolações parciais

def w(i, j):
    if i == j:
        return z[i]
    elif i - j == 1:
        return (z[j] - z[i]) / (t[j] - t[i])
    else:
        return (w(i+1, j) - w(i, j-1)) / (t[j] - t[i])


print('w0,0: ', Fraction(w(0, 0)).limit_denominator())
print('w0,1: ', Fraction(w(0, 1)).limit_denominator())
print('w0,2: ', Fraction(w(0, 2)).limit_denominator())
print('w0,3: ', Fraction(w(0, 3)).limit_denominator())
print('w0,4: ', Fraction(w(0, 4)).limit_denominator())
print('w0,5: ', Fraction(w(0, 5)).limit_denominator())
print()
print('w1,1: ', Fraction(w(1, 1)).limit_denominator())
print('w1,2: ', Fraction(w(1, 2)).limit_denominator())
print('w1,3: ', Fraction(w(1, 3)).limit_denominator())
print('w1,4: ', Fraction(w(1, 4)).limit_denominator())
print('w1,5: ', Fraction(w(1, 5)).limit_denominator())
print()
print('w2,2: ', Fraction(w(2, 2)).limit_denominator())
print('w2,3: ', Fraction(w(2, 3)).limit_denominator())
print('w2,4: ', Fraction(w(2, 4)).limit_denominator())
print('w2,5: ', Fraction(w(2, 5)).limit_denominator())
print()
print('w3,3: ', Fraction(w(3, 3)).limit_denominator())
print('w3,4: ', Fraction(w(3, 4)).limit_denominator())
print('w3,5: ', Fraction(w(3, 5)).limit_denominator())
print()
print('w4,4: ', Fraction(w(4, 4)).limit_denominator())
print('w4,5: ', Fraction(w(4, 5)).limit_denominator())
print()
print('w5,5: ', Fraction(w(5, 5)).limit_denominator())
print()

# Função interpoladora

pT = z[0] + w(0, 1)*(x - t[0]) + w(0, 2)*(x - t[0])*(x - t[1]) + \
    w(0, 3)*(x - t[0])*(x - t[1])*(x - t[2]) + w(0, 4)*(x - t[0])*(x - t[1])*(x - t[2])*(x - t[3]) + \
    w(0, 5)*(x - t[0])*(x - t[1])*(x - t[2])*(x - t[3])*(x - t[4])

print('pT(x): ', sp.nsimplify(pT.expand(), tolerance=1e-8, full=True, rational=True, rational_conversion='base10'))