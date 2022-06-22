#include <cstdio>
#include <string>
#include <iostream>
using std::string;

class No {
  friend class ArvBinBusca;
  
public:
  No(const int chave);

  void escreve(const char *sep = "");
  
private:
  int chave;
  No *pai;
  No *esq;
  No *dir;
};


class ArvBinBusca
{
public:
  ArvBinBusca();
  ArvBinBusca(const ArvBinBusca& outro); // construtor de cópia
  ~ArvBinBusca();
  ArvBinBusca& operator=(const ArvBinBusca& outro); // operador de atribuição
  
  void escreve_ordenado(); // escreve em percurso em-ordem
  void escreve();

  No *get_raiz(); // devolve a raiz
  No *busca(int k); // devolve o ponteiro para um elemento, se achar, ou NULL
  No *minimo(); // devolve o menor elemento da árvore
  No *maximo(); // devolve o maior elemento da árvore
  No *sucessor(No *x); // devolve o sucessor de um elemento
  No *predecessor(No *x); // devolve o predecessor de um elemento

  void insere(int chave); // insere um elemento
  bool remove(int chave); // busca e remove um elemento

  void limpa(); // remove todos elementos da árvore, liberando a memoria
  
private:
  No *raiz;

  void escreve_ordenado(No *x); // escreve em percurso em-ordem
  void escreve(const string& prefixo, No *x);
 
  No *busca(No *x, int k); // Parte recursiva da busca
  No *minimo(No *x); // Parte recursiva de minimo
  No *maximo(No *x); // Parte recursiva de maximo

  void insere(No *z); // Insercao, mas ja recebe pronto o no (nao a chave) a ser inserido
  void transplante(No *u, No *v); // Transplante
  void remove(No *z); // Recebe o no a ser removido (deve tratar todos os casos e fazer transplante, se necessario)
  
  void limpa(No *x); // dado um nó x, remove recursivamente elementos abaixo e deleta x
  
  void copia(const ArvBinBusca& T); // copia uma árvore T para a atual a partir da raiz,
                                    // usada no construtor de cópia e no operador de atribuição
  void copia(No *dest, No *orig);   // copia um nó e os descendentes recursivamente
};


int main(void)
{
  ArvBinBusca T; // construtor ArvBinBusca()
  //nao esquecer que no lugar do um é zero
  int v[] = {10, 25, 0, 16, 20, 9, 15, 6, 14, 7, 18, 12, 22, 19, 3, 13};
  //int v[] = {50,40,60,10,20,30,22,11,4,6,7,9,8,1,100,99,51,52,53};
  for (const auto &x : v)
    T.insere(x); //TODO: implemente primeiro o metodo insere
  
  printf("T:\n");
  T.escreve();
  printf("Valores de T em ordem crescente: ");
  T.escreve_ordenado(); //TODO: implemente depois escreve_ordenado

  //return 0; //TODO: remover após implementar minimo, maximo, sucessor, predecessor

  No *raiz = T.get_raiz();
  printf("Raiz: ");
  raiz->escreve("\n");

  No *pre = T.predecessor(raiz);
  printf("Predecessor da raiz: ");
  pre->escreve("\n");
  No *suc = T.sucessor(raiz);
  printf("Sucessor da raiz: ");
  suc->escreve("\n");

  printf("Sucessor do predecessor da raiz (== raiz): ");
  T.sucessor(pre)->escreve("\n");
  printf("Predecessor do sucessor da raiz (== raiz): ");
  T.predecessor(suc)->escreve("\n");

  No *minimo = T.minimo();
  No *maximo = T.maximo();
  printf("Mínimo: ");
  minimo->escreve("\n");
  printf("Máximo: ");
  maximo->escreve("\n");
  

  //return 0; //TODO: remover após implementar remoção

  T.remove(0); // Caso 1
  T.remove(13); // Caso 2
  T.remove(10); // Caso 3b + 3a
  //int v[] = {10, 25, 16, 20, 9, 15, 6, 14, 7, 18, 12, 22, 19, 3, 13};
  /*T.remove(25);
  T.remove(16);
  T.remove(20);
  T.remove(9);
  T.remove(15);
  T.remove(6);
  T.remove(7);
  T.remove(18);
  T.remove(12);
  T.remove(22);
  T.remove(19);
  T.remove(13);
  T.remove(3);
  T.remove(14);*/


  printf("T:\n");
  T.escreve();

  //return 0; //TODO: remover após implementar construtor de cópia e operador de atribuição
  
  ArvBinBusca T2(T); // construtor de cópia
  T2.insere(30);
  printf("T:\n");
  T.escreve();
  printf("T2:\n");
  T2.escreve();

  ArvBinBusca T3 = T; // construtor de cópia
  T3.insere(-8);
  printf("T:\n");
  T.escreve();
  printf("T3:\n");
  T3.escreve();

  T3 = T; // operador de atribuição
  T3.insere(100);
  printf("T:\n");
  T.escreve();
  printf("T3:\n");
  T3.escreve();
  
  return 0;
}

void ArvBinBusca::escreve_ordenado(No *x) {

    if(x != NULL){
        escreve_ordenado(x->esq);
        printf("%i ", x->chave);
        escreve_ordenado(x->dir);
    }
  //TODO: implementar (escrever em percurso em-ordem em uma única linha)
}

No *ArvBinBusca::busca(No *x, int k) {
    //x eh o no
    //k eh a chave
    if (x==NULL || k == x->chave){
        return x;
    }
    if(k < x->chave){
        return busca(x->esq, k);
    }else{
        return busca(x->dir, k);
    }
  //TODO: implementar
}

No *ArvBinBusca::minimo(No *x) {
    //x eh o no
    while(x->esq != NULL){
        x = x->esq;
    }
    return x;
  //TODO: implementar
}

No *ArvBinBusca::maximo(No *x) {
    //x eh o no
    while(x->dir != NULL){
        x = x->dir;
    }
    return x;
  //TODO: implementar
}

No *ArvBinBusca::sucessor(No *x) {

    if(x->dir != NULL){
        return minimo(x->dir);
    }
    No* y;
    y = x->pai;

    while(y != NULL && x == y->dir){
        x = y;
        y = y->pai;
    }
    return y;
  //TODO: implementar
}

No *ArvBinBusca::predecessor(No *x) {
    if(x->esq != NULL){
        return maximo(x->esq);
    }
    No* y;
    y = x->pai;
    //alterei y->dir para y->esq
    while(y != NULL && x == y->esq){
        x = y;
        y = y->pai;
    }
    return y;
  //TODO: implementar
}

void ArvBinBusca::insere(No *z) {

    //z eh um no pronto
    No* y = NULL;
    No* x = raiz;
    //printf("%d -", z->chave);
    while(x != NULL){
        y = x;
        //PARA VERIFICAR SE A CHAVE JÁ EXISTE NA ÁRVORE, CASO EXISTA NÃO PODE SER INSERIDA.
        if(z->chave==x->chave){
                return;
            }
        if(z->chave < x->chave){
            //printf("A:%d < %d\n", z->chave, x->chave);
            x = x->esq;
        }else{
            //printf("B:%d > %d\n", z->chave, x->chave);
            x = x->dir;
        }
    }
    z->pai = y;
    if(y==NULL){
        
        //printf("RAIZ %d\n", z->chave);
        raiz = z;
        z->pai = NULL;
        //raiz->dir = NULL;
        //raiz->esq = NULL;
        
    }else{
        if (z->chave < y->chave){
            y->esq = z;
            //printf("INSERIU NA ESQ A CHAVE %d\n", z->chave);
        }else{
            y->dir = z;
            //printf("INSERIU NA DIR A CHAVE %d\n", z->chave);
        }
    }
  //TODO: implementar

}

void ArvBinBusca::transplante(No *u, No *v) {
  //tentativa 1
  if(u->pai==NULL){
    raiz = v;
  }else{
    if(u == u->pai->esq){
      u->pai->esq = v;
    }else{
      u->pai->dir = v;
    }
  }
  if(v!=NULL){
    v->pai = u->pai;
  }
  
  //TODO: implementar
}

void ArvBinBusca::remove(No *z) {
  No* y = NULL;
  if(z->esq == NULL){
    transplante(z, z->dir);
  }else{
    if(z->dir == NULL){
      transplante(z, z->esq);
    }else{
      y = minimo(z->dir);
      if(y->pai != z){
        transplante(y, y->dir);
        y->dir = z->dir;
        y->dir->pai = y;
      }
      transplante(z, y);
      y->esq = z->esq;
      y->esq->pai = y;
    }
  }
  
  //TODO: implementar
}

void ArvBinBusca::limpa(No *x) {
    
  if(x == NULL){
    return;
  }
  limpa(x->esq);
  limpa(x->dir);
  delete x;
  x = NULL;
 
    
    //TODO: implementar
}

void ArvBinBusca::copia(No *dest, No *orig) {
  
  if (orig->esq != NULL) {
    No* novoNo = new No(orig->esq->chave);
    novoNo->pai = dest;
    dest->esq = novoNo;
    copia(novoNo, orig->esq);
    
        
  }
  if (orig->dir != NULL) {
    No* novoNo = new No(orig->dir->chave);
    novoNo->pai = dest;
    dest->dir = novoNo;
    copia(novoNo, orig->dir);
     
  }

  
  //TODO: implementar
}


/////////////////////////////////////////////////ABAIXO OKAY NAO MEXER
//***********************************
//*** IMPLEMENTAÇÕES DA CLASSE NO ***
//***********************************

No::No(const int chave) :
  chave(chave),
  pai(NULL),
  esq(NULL),
  dir(NULL) {
}

void No::escreve(const char *sep) {
  printf("%2d%s", chave, sep);
}

//********************************************
//*** IMPLEMENTAÇÕES DA CLASSE ARVBINBUSCA ***
//********************************************

ArvBinBusca::ArvBinBusca() {
  raiz = NULL;
}

ArvBinBusca::ArvBinBusca(const ArvBinBusca& outro) {
  copia(outro);
}

ArvBinBusca::~ArvBinBusca() {
  limpa();
}

ArvBinBusca& ArvBinBusca::operator=(const ArvBinBusca& outro) {
  limpa();
  copia(outro);
  return *this;
}

void ArvBinBusca::escreve_ordenado() {
  escreve_ordenado(raiz);
  putchar('\n');
}


///////////////////////////VOLTAR AS FUNCOES PARA CÁ ABAIXO
//////////////////////////
void ArvBinBusca::escreve() {
  escreve("", raiz);
}

void ArvBinBusca::escreve(const string& prefixo, No *x) {
  if (x == NULL)
    return;

  bool ehDireito = x->pai and x->pai->dir == x;
  bool temIrmaoEsq = x->pai and x->pai->esq;
  
  std::cout << prefixo.c_str();
  printf(ehDireito and temIrmaoEsq ? "├──" : "└──" );

  if (x->pai == NULL) // raiz
    x->escreve("\n");
  else
    x->escreve(ehDireito ? "d\n" : "e\n");
  
  escreve(prefixo + (ehDireito and temIrmaoEsq ? "│   " : "    "), x->dir);
  escreve(prefixo + (ehDireito and temIrmaoEsq ? "│   " : "    "), x->esq);
}

No *ArvBinBusca::get_raiz() {
  return raiz;
}

No *ArvBinBusca::busca(int k) {
  return busca(raiz, k);
}

void ArvBinBusca::insere(int chave) {
  No *z = new No(chave);
  insere(z);
}

No *ArvBinBusca::minimo() {
  return raiz ? minimo(raiz) : NULL;
}

No *ArvBinBusca::maximo() {
  return raiz ? maximo(raiz) : NULL;
}

bool ArvBinBusca::remove(int chave) {
  No *z = busca(raiz, chave);
  if (z == NULL)
    return false;

  remove(z);
  delete z;
  return true;
}

void ArvBinBusca::limpa() {
  limpa(raiz);
  raiz = NULL;
}

void ArvBinBusca::copia(const ArvBinBusca& T) {
  if (T.raiz == NULL)
    raiz = NULL;
  else {
    raiz = new No(T.raiz->chave);
    copia(raiz, T.raiz);
  }
}
