#ifndef PILHA_H
//se a biblioteca PILHA_H não tiver inclusa
#define PILHA_H
//Inclua PILHA_H
#include <stdio.h>
#define MAX 100
//toda vez q aparecer "MAX", ele troca por 100

typedef int
tp_item;

typedef struct{
int topo;
tp_item item[MAX];
}tp_pilha;

void InicializarPilha(tp_pilha *p){
p->topo = -1; //Quer dizer q não tem nenhum elemento na pilha
}

int pilhaVazia(tp_pilha *p){ //se retornar 1, quer dizer q a pilha está vazia
if(p->topo==-1) return 1;
return 0; //se retornar 0, a pilha não está vazia
}

int pilhaCheia(tp_pilha *p){//se retornar 1, quer dizer q a pilha está cheia
if(p->topo == MAX -1){
return 1;
}else{
return 0;//se retornar 0, a pilha não está cheia
}
}

int push(tp_pilha *p, tp_item e){
if(pilhaCheia(p)==1) return 0; //se a pilha estiver cheia, aborta a operação
p->topo++;
p->item[p->topo]=e;
//o valor é adicionado no vetor item ('e' é o valor que o usuário que adicionar)
return 1;
}

int pop(tp_pilha *p, tp_item *e){
if(pilhaVazia(p)) return 0; //se a pilha estiver vazia, ele aborta a operação
*e=p->item[p->topo]; //o valor de 'e' = item[topo]
p->topo--;//topo diminui em 1
return 1;
}

int top(tp_pilha *p, tp_item *e){
if(pilhaVazia(p)) return 0;//se a pilha estiver vazia, ele aborta a operação
*e= p->item[p->topo];//o valor de 'e' = item[topo]
return 1;
}

void imprimePilha(tp_pilha p){
tp_item e;
printf("\n");
while(!pilhaVazia(&p)){ //se a pilha não estiver vazia, realiza o comando
pop(&p, &e);
printf("%d", e);
}
}

int alturaDaPilha(tp_pilha *p){
return p->topo+1; //retorna a quantidade de valores armazenados
}
#endif
