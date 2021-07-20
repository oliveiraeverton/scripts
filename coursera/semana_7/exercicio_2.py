'''Exercício 2
Refaça o exercício 1 imprimindo os retângulos sem preenchimento, de forma que os caracteres que não estiverem na borda do retângulo sejam espaços.'''


#
x = int(input("Digite a largura: "))
y = int(input("Digite a altura: "))
i = 1

print("#" * x)

while i < (y - 1):
    print("#", " " * (x - 2), "#",sep="")
    i += 1

print("#" * x)
