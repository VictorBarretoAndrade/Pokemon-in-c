#ifndef LISTASE_H
#define LISTASE_H
#include <stdio.h>                                       
#include <stdlib.h> 
#include <string.h>

#define MAX_STR_SIZE 100

typedef char* tp_itemL;

typedef struct tp_no {
    tp_itemL info;
    struct tp_no *prox;
} tp_listase;


tp_listase *inicializaListase() {
    return NULL;
}

int listaseVazia(tp_listase *lista) { //verifica se  lista está vazia
    if(lista == NULL) return 1;
    return 0;
}

tp_listase *alocaListase() {
    tp_listase *novo_no = (tp_listase*) malloc(sizeof(tp_listase));
    return novo_no;
}

int insereListaseFim(tp_listase **l, const char* e) {
    tp_listase *novo_no = alocaListase();
    tp_listase *atual;

    if (novo_no == NULL) return 0; 

    novo_no->info = strdup(e);  // Aloca espaço e copia a string
    novo_no->prox = NULL;

    if (*l == NULL) { 
        *l = novo_no;
    } else {
        atual = *l;
        while (atual->prox != NULL) atual = atual->prox;
        atual->prox = novo_no;
    }

    return 1;
}

int insereListaseInicio(tp_listase **l, tp_itemL e){
    tp_listase *novo_no, *atual;
    novo_no = alocaListase();
    if(novo_no==NULL) return 0;
    novo_no->info = e;
    if(listaseVazia(*l)) novo_no->prox=NULL;
    else{
        novo_no->prox=*l;
        *l=novo_no;
    }
    return 1;
    
}

/*void imprimeListase(tp_listase * lista){ //imprime
    tp_listase *atu;
    atu=lista;
    while(atu!=NULL){
        printf("%c\n", atu -> info);
        atu=atu->prox;
    }
}*/

int removeListase (tp_listase **lista, tp_itemL e){  //retira um nó
    tp_listase * ant, *atu;
    atu = *lista;
    ant = NULL;
    while((atu!= NULL) && (atu->info!=e)){
        ant = atu;
        atu = atu -> prox;
    }
    if(atu==NULL) return 0;
    if(ant == NULL){
        *lista=atu->prox;
    }
    else{
        ant-> prox=atu->prox;
    }
    free(atu);
    atu=NULL;
    return 1;
    }
    
    
    int botaCrescente(tp_listase **l, tp_itemL e){
     tp_listase *novo_no, *atual;
     novo_no=inicializaListase();
     atual=inicializaListase();
    

    novo_no = alocaListase();

    if(novo_no == NULL) return 0; //  não alocou memória

    novo_no->info = e;
    novo_no->prox=NULL;
    

    if(listaseVazia(*l) || (*l)->info > e){
        novo_no->prox=*l;
         *l = novo_no; // se for o primeiro nó
    }
    else {
        //falta pro o prox do novo no
        atual = *l;
        
        while(atual->prox != NULL && atual->prox->info < e) atual = atual->prox; // aponta para o último nó
        novo_no->prox = atual->prox;
        atual->prox = novo_no;
        
    }

    return 1;
}
    

  /*p_listase *buscaListase (tp_listase *lista, tp_itemL e){ //busca um item na lista
      tp_listase *atu;
      while((atu!=NULL)&&(atu->info!=e)){
          atu=atu->prox;
          if(atu==NULL) return NULL;
          return atu;
      }
  }*/
  
    /*int conta_listase(tp_listase *lista, tp_itemL e, tp_itemL cont){ //busca um item na lista
      tp_listase *atu;
      while((atu!=NULL)){
          if(atu->info>e) cont++;
          atu=atu->prox;
          if(atu==NULL) break;
          
      }
      return cont;
  }
  */
  int tamanho_listase(tp_listase *lista){ //retorna o tamanho da lista
      int cont =0;
      tp_listase *atu;
      atu=lista;
      while(atu!=NULL){
          cont++;
          atu=atu->prox;
      }
      return cont;
  }
  
  int quantidadeNosMaiores(tp_listase *lista, tp_itemL n){
      int cont =0;
      tp_listase *atu;
      atu=lista;
      while(atu!=NULL){
          if(atu->info > n){
          cont++;
          }
          atu=atu->prox;
      }
      return cont;
  }
  
  void destroiListase (tp_listase **l){ //destroi
      tp_listase *atu;
      atu=*l;
      while(atu!=NULL){
          *l=atu->prox;
          free(atu);
          atu=*l;
      }
      *l=NULL;
  }
  
  #endif
