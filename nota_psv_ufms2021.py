#Programa Para calcular a nota do PSV UFMS 2021

print("*****************************************************")
print("**********CALCULE SUA NOTA DO PSV_UFMS_2021**********")
print("*****************************************************")
l = int(input("Entre com a quantidade de acertos na prova de Linguagens: "))
m = int(input("Entre com a quantidade de acertos na prova de Matemática: "))
n = int(input("Entre com a quantidade de acertos na prova de Natureza: "))
h = int(input("Entre com a quantidade de acertos na prova de Humanas: "))
print("*****************************************************")
print("*****************************************************")
print("*****************************************************")
l1 = (500 + 100*((2*l) - 14.90)/5.23)
m1 = (500 + 100*((2*m) - 9.95)/3.98)
n1 = (500 + 100*((2*n) - 11.04)/5.04)
h1 = (500 + 100*((2*h) - 14.39)/5.37)


print("Sua nota na área de Linguagens é: \t{0:12.3f}".format(l1))
print("Sua nota na área de Matemática é: \t{0:12.3f}".format(m1))
print("Sua nota na área de Natureza é: \t{0:12.3f}".format(n1))
print("Sua nota na área de Humanas é: \t{0:20.3f}".format(h1))
