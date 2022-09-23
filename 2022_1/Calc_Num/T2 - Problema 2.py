import numpy as np
import matplotlib.pyplot as plt

valorVista2 = 129000
jurosEmprestimo2 = 0.02
valorEntrada2 = 27000
valorParcelas2 = [24000,30000,32000,22000] 
totalParcelado2 = 135000

Q = valorVista2 - valorEntrada2
def f2(juros):
  y = 0
  juros=juros/100
  for i in range (1,5):
    y = y + valorParcelas2[i-1]/(1+juros)**(i) #ao mesmo tempo que o loop é responsável por modificar o mês, ele também modifica o valorParcelas. Assim correndo pelo vetor.
  return y - Q

x=np.linspace(0,10,200)
cm = 1/2.54 
fig, ax = plt.subplots(figsize=(15*cm, 10*cm))
ax.plot(x, f2(x), label = 'a função f(juros)')
plt.axhline(y=0, color='r' )
ax.set_xlabel('Valor do Juros',fontsize=14)
ax.set_ylabel('Valor da função',fontsize=14)
ax.set_title('Função do Juros Mensal',fontsize=14) 
ax.legend(loc='lower right')
ax.grid(True)

plt.show()


x=np.linspace(2,4,100)
cm = 1/2.54 
fig, ax = plt.subplots(figsize=(15*cm, 10*cm))
ax.plot(x, f2(x), label = 'a função f(juros)')
plt.axhline(y=0, color='r' )
ax.set_xlabel('x',fontsize=14)
ax.set_ylabel('y',fontsize=14)
ax.set_title('Função do Juros Mensal',fontsize=14) 
ax.legend(loc='lower right')
ax.grid(True)

plt.show()


a = 2.25 #intervalo inicial
b = 2.5 #intervalo inicial

precisao = 0.01 #como não foi dado uma precisão, achamos que por se tratar de juros, 0.01 seria uma boa precisão

if (b-a) < precisao:
   jurosMes = a
else:
   k = 1 #interações
   M = f2(a)
   while True:
      x = (a+b)/2
      print("Iteração:",k)
      print("Taxa de juros encontrada:",x) #taxa de juros
      print("Valor da f(juros):",f2(x)) #f(taxa de juros)
      print("Pŕoximo valor:",(b - a)/2) 
      print("\n")

      if M * f2(x) > 0:
         a = x
      else:
         b = x

      if (b - a) <= precisao:
         jurosMes = (a + b)/2
         break

      k = k + 1

print("Valor encontrado: {}% ao mês.".format(jurosMes)) #juros mensal


