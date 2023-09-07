import numpy as np
import matplotlib.pyplot as plt

precoVista1 = 1305
valorParcela1 = 139.56
numeroParcela1 = 11
entrada1 = 139.65

Q = precoVista1 - entrada1 

def f(juros):
  y = 0
  juros=juros/100
  for i in range (1,numeroParcela1+1):
    y = y + valorParcela1/(1+juros)**(i)
  return y - Q

x=np.linspace(0,10,200) 
cm = 1/2.54  
fig, ax = plt.subplots(figsize=(15*cm, 10*cm))
ax.plot(x, f(x), label = 'a função f')    
plt.axhline(y=0, color='r' ) #a linha do zero foi traçada para melhorar a visualização da raiz da função
ax.set_xlabel('Valor do Juros',fontsize=14) 
ax.set_ylabel('Valor da Função',fontsize=14)
ax.set_title('Função do juros',fontsize=14)
ax.legend(loc='lower right')
ax.grid(True)

plt.show()

x=np.linspace(4,6,200) 
cm = 1/2.54  
fig, ax = plt.subplots(figsize=(15*cm, 10*cm))
ax.plot(x, f(x), label = 'a função f')    
plt.axhline(y=0, color='r' ) 
ax.set_xlabel('Valor do Juros',fontsize=14) 
ax.set_ylabel('Valor da Função',fontsize=14)
ax.set_title('Função do juros',fontsize=14)
ax.legend(loc='lower right')
ax.grid(True)

plt.show()

a = 4 #intervalo inicial
b = 5 #intervalo inicial

precisao = 0.1 #como não foi dado uma precisão, achamos que por se tratar de juros, 0.1 seria uma boa precisão

if (b-a) < precisao:
   jurosMes = a
else:
   k = 1 #interações
   M = f(a)
   while True:
      x = (a+b)/2
      print("Iteração:",k)
      print("Taxa de juros encontrada:",x) #taxa de juros
      print("Valor da f(juros):",f(x)) #f(taxa de juros)
      print("Pŕoximo valor:",(b - a)/2) 
      print("\n")

      if M * f(x) > 0:
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

