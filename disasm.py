import sys
def bin(s):
  return str(s) if s<=1 else bin(s>>1) + str(s&1)


def main(argv):
  if (len(argv) == 0):
    print('Error: inform a filename to disassemble.')
    exit()
     
    # Nome do arquivo binário de entrada
  filename = argv[0]
    
    # Opção 'rb' abre o arquivo para leitura em formato binário
  with open(filename, 'rb') as binfile:
    
    marieB = {0 : "jns",
          1 : "load",
          10 : "store",
          11 : "add",
          100 : "subt",
          101 : "input",
          110 : "output",
          111 : "halt",
          1000 : "skipcond",
         1001 : "jump",
         1010 : "clear",
         1011 : "addi",
         1100 : "jumpi",
         1101 : "loadi",
         1110 : "storei",
         1111 : ""
         }
    hexad = {0 : 0,
        1 : 1,
        10 : 2,
        11 : 3,
        100 : 4,
        101 : 5,
        110 : 6,
        111 : 7,
        1000 : 8,
        1001 : 9,
        1010 : 'a',
        1011 : 'b',
        1100 : 'c',
        1101 : 'd',
        1110 : 'e',
        1111 : 'f' 
        }
    
    vetorALFA = []
    #INICIA A LEITURA NA POSICAO 0 DO ARQUIVO
    binfile.seek(0)
    #TRANSFERE O CONTEUDO DO ARQUIVO PARA A VARIAVEL DATA
    frame = binfile.read()

    #CONTAR A QUANTIDADE DE HEXADECIMAIS EXISTE NO ARQUIVO
    cont = 0
    for i in frame:
      cont+=1
    vP1 = []
    vP2 = []
    a = 0
    b = 1
    for i in range(cont//2):
      x = format(frame[a], 'b')
      x = int(x)
      vP1.append(x)
      y = format(frame[b], 'b')
      y = int(y)
      vP2.append(y)
      a += 2
      b += 2
    for i in range(cont//2):
      vetorALFA.append(vP1[i]//10000)
      vetorALFA.append(vP1[i]%10000)
      vetorALFA.append(vP2[i]//10000)
      vetorALFA.append(vP2[i]%10000)
    a = 0
    c = 0
    for i in vetorALFA:
      c+=1
    for i in range(0, c, 4):
      
      if(marieB[vetorALFA[i]] == "clear" or marieB[vetorALFA[i]] == "input" or marieB[vetorALFA[i]] == "output" or
            marieB[vetorALFA[i]] == "halt"):
          print(marieB[vetorALFA[i]])
      else:
        print(marieB[vetorALFA[i]], end=" ")
        #print("{}{}{}".format(hexad[vetorALFA[i+1]], hexad[vetorALFA[i+2]], hexad[vetorALFA[i+3]]))
        if(hexad[vetorALFA[i+1]]==0 and hexad[vetorALFA[i+2]]==0 and  hexad[vetorALFA[i+3]]== 0):
          print("0")
        elif(hexad[vetorALFA[i+1]]==0 and  hexad[vetorALFA[i+2]]== 0):
          print("{}".format(hexad[vetorALFA[i+3]]))
        elif(hexad[vetorALFA[i+1]]==0):
          print("{}{}".format(hexad[vetorALFA[i+2]], hexad[vetorALFA[i+3]]))
        else:
          print("{}{}{}".format(hexad[vetorALFA[i+1]], hexad[vetorALFA[i+2]], hexad[vetorALFA[i+3]]))

if __name__ == "__main__":
  main(sys.argv[1:])