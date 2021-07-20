"""Exercício 3
  Escreva um programa que receba um número inteiro na entrada, calcule e imprima a soma dos dígitos deste número na saída"""

n=int(input("Digite o valor de n: "))
a=0
impar=1
total=n


while total!=1:
	impar=1+a
	a=a+2
	print(impar)
	total=n
	n=n-1
if n==1:
	print(1)
