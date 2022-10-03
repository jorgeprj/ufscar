import numpy as np
import matplotlib.pyplot as plt

valorInvestimento3 = 889.18
valorParcelas3 = 48.81
pagamentoFinal3 = 1000
totalParcelas3 = 21
meses3 = 124
totalRecebimento3 = 2025.01

def f3(juros):
  y = 0
  juros=juros/100
  y = valorParcelas3/(1+juros)**4
  for i in range (10,meses3,6):
    y = y + (valorParcelas3/(1+juros)**(i))
  y = y + (pagamentoFinal3/(1+juros)**(meses3))
  return y - valorInvestimento3


x=np.linspace(0,5,200) 
cm = 1/2.54  
fig, ax = plt.subplots(figsize=(15*cm, 10*cm))
ax.plot(x, f3(x), label = 'a função f')    
plt.axhline(y=0, color='r' ) #a linha do zero foi traçada para melhorar a visualização da raiz da função
ax.set_xlabel('Valor do Juros',fontsize=14) 
ax.set_ylabel('Valor da Função',fontsize=14)
ax.set_title('Função do juros',fontsize=14)
ax.legend(loc='lower right')
ax.grid(True)

plt.show()


x=np.linspace(0.7,1.1,200) 
cm = 1/2.54  
fig, ax = plt.subplots(figsize=(15*cm, 10*cm))
ax.plot(x, f3(x), label = 'a função f')    
plt.axhline(y=0, color='r' ) #a linha do zero foi traçada para melhorar a visualização da raiz da função
ax.set_xlabel('Valor do Juros',fontsize=14) 
ax.set_ylabel('Valor da Função',fontsize=14)
ax.set_title('Função do juros',fontsize=14)
ax.legend(loc='lower right')
ax.grid(True)

plt.show()


a = 0.8 #intervalo inicial
b = 1.2 #intervalo inicial

precisao = 0.1 #como não foi dado uma precisão, achamos que por se tratar de juros, 0.1 seria uma boa precisão

if (b-a) < precisao:
   jurosMes = a
else:
   k = 1 #interações
   M = f3(a)
   while True:
      x = (a+b)/2
      print("Iteração:",k)
      print("Taxa de juros encontrada:",x) #taxa de juros
      print("Valor da f(juros):",f3(x)) #f(taxa de juros)
      print("Pŕoximo valor:",(b - a)/2) 
      print("\n")

      if M * f3(x) > 0:
         a = x
      else:
         b = x

      if (b - a) <= precisao:
         jurosMes = (a + b)/2
         break

      k = k + 1

print("Valor encontrado: {}% ao mês.".format(jurosMes)) #juros mensal


def jurosAno(juros):
  y = ((juros/100)+1)**12
  y = (y-1)*100
  return y


print("O valor encontrado para o juros anual é: {}%".format(jurosAno(jurosMes)))