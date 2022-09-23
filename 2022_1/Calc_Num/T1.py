import numpy as np
import matplotlib.pyplot as plt

def f(x): #a função
  y = x**2*(np.cos(x-1))
  return y

def df(x): #primeira derivada
  y = 2*x*np.cos(x-1)-x**2*np.sin(x-1)
  return y

def d2f(x): #segunda derivada
  y = 2*np.cos(x-1)-4*x*np.sin(x-1)-x**2*np.cos(x-1)
  return y

def d3f(x): #terceira derivada
  y = -6*np.sin(x-1)-6*x*np.cos(x-1)+x**2*np.sin(x-1)
  return y

x0=1 # definindo x0 como 1

def P3(x): #Polinomio de Taylor grau 3
  y = f(x0)+ df(x0)*(x-x0)+(d2f(x0)/2)*(x-x0)**2+(d3f(x0)/6)*(x-x0)**3
  return y

x = np.linspace(-1,3,200)
fig, ax = plt.subplots()
ax.plot(x, f(x), label = "Função f(x)")
ax.plot(x, P3(x), label = "Poli. Taylor ordem 3")
ax.scatter(x0, f(x0), c='tab:red' , s=30, label='ponto', marker = 'o')
ax.set_xlabel("Eixo x",fontsize=14)
ax.set_ylabel("Eixo y",fontsize=14)
ax.set_title("f(x) e o Polinômio de Taylor",fontsize=18)
ax.legend(loc="lower right")
ax.grid(True)
plt.show()

x = np.linspace(0,2,200)
fig, ax = plt.subplots()
ax.plot(x, f(x), label = "Função f(x)")
ax.plot(x, P3(x), label = "Poli. Taylor ordem 3")
ax.scatter(x0, f(x0), c='tab:red' , s=30, label='ponto', marker = 'o')
ax.set_xlabel("Eixo x",fontsize=14)
ax.set_ylabel("Eixo y",fontsize=14)
ax.set_title("f(x) e o Polinômio de Taylor",fontsize=18)
ax.legend(loc="lower right")
ax.grid(True)
plt.show()

x=np.linspace(0,2,200)
fig, ax = plt.subplots()
ax.plot(x, f(x) - P3(x), label = 'diferença f(x)-P3(x)')
ax.set_xlabel('Eixo X',fontsize=14)
ax.set_ylabel('Eixo Y',fontsize=14)
ax.set_title('Diferença entre f(x) e o polinomio de Taylor',fontsize=8)
ax.legend(loc='lower right') 
ax.grid(True)
plt.show()

def pontos_erro(H):
  l = []
  j = 1
  for j in range(5):
    p = H/2**j
    p = p + x0
    l.append(p)
  return np.array(l)

def erro(H):
  x = pontos_erro(H)
  e = np.abs(f(x) - P3(x))
  return e

H = 0.2 #definindo o valor de H

for i in range(5): #criando um loop para mostrar os pontos e erros calculados.
  print("x{} = {}".format(i, pontos_erro(H)[i]))
  print("Erro = {} \n".format(erro(H)[i]))

def erros_consecutivos(Erros):
  l =[]
  for i in range(4):
    e1 = Erros[i]
    e2 = Erros[i+1]
    l.append(np.log2(e1/e2))
  return np.array(l)

erros = erro(0.2) #o valor de erro(0.2) foi colocado em uma variável para a melhor visualização

for i in range(4): #criando um loop para mostrar a razão nos diferentes valores de j.
  print("p{} = {}".format(i+1, erros_consecutivos(erros)[i]))

erros = erro(0.8)
erros2 = erro(0.4)

for i in range(4): #criando um loop para mostrar a razão nos diferentes valores de j.
  print("p{} = {} | p{} = {} ".format(i+1, erros_consecutivos(erros)[i], i+1, erros_consecutivos(erros2)[i]))
  print("A diferença é de {} \n".format(erros_consecutivos(erros2)[i] - erros_consecutivos(erros)[i]))

