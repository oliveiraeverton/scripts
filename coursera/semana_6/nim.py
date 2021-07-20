def usuario_escolhe_jogada(n, m):
  
  while True:
    retirar_pedras = int(input("Quantas peças você vai tirar? "))
    if 0 < retirar_pedras <= m and retirar_pedras<0:
      break
    print("\nOops! Jogada inválida! Tente de novo.\n")
    
  
  if retirar_pedras == 1:
    print("\nVocê tirou uma peça.")
    if n == 1:
      print("Agora resta apenas uma peça no tabuleiro.\n")
    else:
      print(f"Agora resta apenas {n} peças no tabuleiro.\n")
    
  else:
    print(f"Você tirou {retirar_pedras} peças.")
    if n == 1:
      print("Agora resta apenas uma peça no tabuleiro.\n")
    else:
      print(f"Agora resta apenas {n} peças no tabuleiro.\n")

  return retirar_pedras

def computador_escolhe_jogada(n, m):
  sair = True
  reset = n
  for i in range(1, m+1, 1):
    if n>0:
      n = n - i
      if n % (m+1) == 0:
        if i == 1:
          print(f"Computador tirou uma peça.")
          if n > 0:
            print(f"Agora restam {n} peças no tabuleiro.\n")
          else:
            print("Fim do jogo! O computador ganhou!")
          sair = False
          break
        else:
          print(f"Computador tirou {i} peça.")
          if n > 0:
            print(f"Agora restam {n} peças no tabuleiro.\n")
          else:
            print("Fim do jogo! O computador ganhou!")
          sair = False
          break

      if i == m:
        print(f"Computador tirou {i} peças.")
        if n > 0:
          print(f"Agora restam {n} peças no tabuleiro.\n")
        else:
          print("Fim do jogo! O computador ganhou!")
          sair = False
          break
    n = reset        

  if sair:           
    n = n - m
    print(f"Computador tirou {m} peças.")
    if n > 0:
      print(f"Agora restam {n} peças no tabuleiro.\n")
    else:
      print("Fim do jogo! O computador ganhou!")
    
    return m
  return i

def partida():
  n = int(input("Quantas peças? "))
  m = int(input("Limite de peças por jogadas? "))
  return n, m
############################################################
##############INÍCIO DO SCRIPT
print("\nBem-vindo ao jogo do NIM! Escolha:\n")
modo = int(input("1 - para jogar uma partida isolada\n2 - para jogar um campeonato "))

if modo == 2:
  print("\nVocê escolheu um campeonato!")
  jogadas = 3
else:
  print("\nVocê escolheu uma partida isolada!")
  jogadas = 1


for i in range(1, jogadas+1, 1):
  
  print(f"\n****  Rodada {i} ****\n")

  n, m = partida()
  if n%(m+1) == 0:
    #JOGADOR COMEÇA
    primeiro = 1
    print("\nVocê começa!\n")
    
  else:
    #COMPUTADOR COMEÇA
    primeiro = 2
    print("\nComputador começa!\n")
    
  
  
  while True:
    
    if primeiro == 1:
      #JOGADOR COMEÇA
      y = usuario_escolhe_jogada(n, m)
      n = n - y
      #PRÓXIMO A JOGAR É O:
      primeiro = 2
    
    if primeiro == 2:
      #COMPUTADOR COMEÇA
      x = computador_escolhe_jogada(n, m)
      n = n - x
      #PRÓXIMO A JOGAR É O:
      primeiro = 1
   
    if n <= 0:
      break
    
print('''**** Final do campeonato! ****

Placar: Você 0 X 3 Computador''')

