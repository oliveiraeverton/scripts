'''Exercício 1
Escreva um programa que recebe como entradas (utilize a função input)
dois números inteiros correspondentes à largura e à altura de um retângulo, respectivamente.
O programa deve imprimir, usando repetições encaixadas (laços aninhados),
uma cadeia de caracteres que represente o retângulo informado com caracteres '#' na saída.'''

largura = int(input())
altura = int(input())


hastag = altura
primeira_passagem = 1
auxiliar = largura
while altura > 0:
    largura = auxiliar
    while largura >0:
        if primeira_passagem == 1:
            print("#", end='')
            largura -= 1
    altura -=1
    print()
