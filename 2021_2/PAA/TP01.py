"""
  Data que foi realizado: 12/02/2022
  Projeto e Análise de Algoritmos
    Primeiro Trabalho Prático - Genética
      Nome: Jorge Luiz Medeiros Pires
      RA: 790942
"""

entrada = input() #1.in

arq = open(entrada, 'r')

linhas = 0
for linha in arq:
    linhas = linhas+1


arq.seek(0)

for i in range(linhas-1):
    x = str(arq.readline()) #"4 bbaa abaa"
    x = x.split()
    tam = int(x[0])
    #print(tam)
    #print(x[1].split())
    a1 = x[1][:tam//2]
    a2 = x[1][tam//2:]
    #print(x[2].split())
    b1 = x[2][:tam//2]
    b2 = x[2][tam//2:]

    if sorted(a1) == sorted(b1) and sorted(a2) == sorted(b2):
        print("SIM")
    elif sorted(a1) == sorted(b2) and sorted(a2) == sorted(b1):
        print("SIM")
    else:
        print("NAO")

arq.close()