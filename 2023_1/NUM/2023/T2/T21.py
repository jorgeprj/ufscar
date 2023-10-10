import numpy as np

def truncate(a, n):
    return int(a * 10 **n) / 10**n

x = '''-1.0	
-0.8	
-0.6	
-0.4	
-0.2	
0.0	
0.2	
0.4	
0.6	
0.8	
1.0'''

y = '''0.076
-0.609
0.159
-0.352
-0.627
-0.181
0.084
-0.905
-0.311
-0.628
0.122'''

x = np.array([float(value) for value in x.split()])
y = np.array([float(value) for value in y.split()])

# Construindo a matriz A
A = np.vander(x, 10, increasing=True)

# Construindo o vetor B
B = np.array(y).reshape(-1, 1)

# Resolvendo o sistema de equações
X = np.linalg.lstsq(A, B, rcond=None)[0]

# Coeficientes do polinômio de nono grau
coefficients = X.flatten()

for coef in coefficients:
    print(f"{truncate(coef, 8)}")