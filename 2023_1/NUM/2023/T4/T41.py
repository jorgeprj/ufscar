# Interpolação de 4 pontos no plano com polinômio de Lagrange

import numpy as np
import sympy as sp

x = sp.symbols('x')

# Dados de entrada
t = np.array([-4, -2,  3,  6])
z = np.array([ 9, -5, -4, -5])

# Funções de Lagrange

l0 = (x - t[1])*(x - t[2])*(x - t[3]) / ((t[0] - t[1])*(t[0] - t[2])*(t[0] - t[3]))

l1 = (x - t[0])*(x - t[2])*(x - t[3]) / ((t[1] - t[0])*(t[1] - t[2])*(t[1] - t[3]))

l2 = (x - t[0])*(x - t[1])*(x - t[3]) / ((t[2] - t[0])*(t[2] - t[1])*(t[2] - t[3]))

l3 = (x - t[0])*(x - t[1])*(x - t[2]) / ((t[3] - t[0])*(t[3] - t[1])*(t[3] - t[2]))

# Funções de Lagrange com frações

print('L0(x): ', l0.expand())
print('L1(x): ', l1.expand())
print('L2(x): ', l2.expand())
print('L3(x): ', l3.expand())


# Função interpoladora

pT = z[0]*l0 + z[1]*l1 + z[2]*l2 + z[3]*l3

print()
print('L(x): ', pT.expand())
