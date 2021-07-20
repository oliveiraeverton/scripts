"""Exercício 2
Receba um número inteiro positivo na entrada e imprima os  n n primeiros números ímpares naturais."""

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
