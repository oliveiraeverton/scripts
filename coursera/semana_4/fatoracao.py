#TESTE WHILE PRINT 10 OI


#i = 0

#while i < 10:
#    print('Oi', i)
#    i = i + 1

n = int(input("Digite o valor de n: "))

fat = 1

while n > 1:
    #print(fat, "começo")
    fat = fat * n
    #print(fat, "inicio")
    n = n - 1
    #print(fat, "fim")
print(fat)


