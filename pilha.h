#ifndef PILHA_H
//se a biblioteca PILHA_H não tiver inclusa
#define PILHA_H
//Inclua PILHA_H
#include <stdio.h>
#define MAXP 100
//toda vez q aparecer "MAXP", ele troca por 100

typedef int
tp_item;

typedef struct{
int topo;
tp_item item[MAXP];
}tp_pilha;

void InicializarPilha(tp_pilha *p){
p->topo = -1; //Quer dizer q não tem nenhum elemento na pilha
}

int pilhaVazia(tp_pilha *p){ //se retornar 1, quer dizer q a pilha está vazia
if(p->topo==-1) return 1;
return 0; //se retornar 0, a pilha não está vazia
}

int pilhaCheia(tp_pilha *p){//se retornar 1, quer dizer q a pilha está cheia
if(p->topo == MAXP -1){
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
printf(" %d", e);
}
}

void imprimepoke(tp_pilha p){
tp_item e;
printf("\n");
while(!pilhaVazia(&p)){ //se a pilha não estiver vazia, realiza o comando
pop(&p, &e);
    switch(e) {
        case 1:
            printf("Squirtle\n");
            break;
        case 2:
            printf("Mudkip\n");
            break;
        case 3:
            printf("Froakie\n");
            break;
        case 4:
            printf("Cyndaquil\n");
            break;
        case 5:
            printf("Torchic\n");
            break;
        case 6:
            printf("Fuecoco\n");
            break;
        case 7:
            printf("Chikorita\n");
            break;
        case 8:
            printf("Treecko\n");
            break;
        case 9:
            printf("Turtwig\n");
            break;
        case 10:
            printf("Grimer\n");
            break;
        case 11:
            printf("Ekans\n");
            break;
        case 12:
            printf("Koffing\n");
            break;
        case 13:
            printf("Sandshrew\n");
            break;
        case 14:
            printf("Diglett\n");
            break;
        case 15:
            printf("Cubone\n");
            break;
        default:
            printf("Número inválido.\n");
    }
}
}

int alturaDaPilha(tp_pilha *p){
return p->topo+1; //retorna a quantidade de valores armazenados
}
#endif
