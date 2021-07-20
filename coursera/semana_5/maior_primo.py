'''Exercício 2 - Primos
Escreva a função maior_primo que recebe um número inteiro maior ou igual a 2 como parâmetro e devolve o maior número primo menor ou igual ao número passado à função'''

m = 0
def maior_primo(m):
    total = 0
    for c in range(m):
      for c in range(2, m+1):
        if m%c == 0:
          total = total + 1
	
      if total==1:
        return m
        break
      else:
        m = m - 1
        total = 0
