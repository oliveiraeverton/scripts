'''Exercício 1 - Máximo
Escreva a função maximo que recebe 2 números inteiros como parâmetro e devolve o maior deles.'''

#COURSERA


def maximo(a, b):
    if a < b:
        return b
    else:
        return a

input(int(maximo()))
