#ifndef PILHA_H
//se a biblioteca PILHA_H não tiver inclusa
#define PILHA_H
//Inclua PILHA_H
#include <stdio.h>
#define MAX 10

typedef struct {
    pokemon itens[MAX];
    int topo;
} Pilha;


// Função para inicializar a pilha
void inicializaPilhaP(Pilha *p) {
    p->topo = -1; // A pilha começa vazia
}

// Função para verificar se a pilha está vazia
int pilhaVaziaP(Pilha *p) {
    return p->topo == -1;
}

// Função para verificar se a pilha está cheia
int pilhaCheiaP(Pilha *p) {
    return p->topo == MAX - 1;
}

// Função para empilhar um pokemon
void pushP(Pilha *p, pokemon pkmn) {
    if (pilhaCheia(p)) {
        printf("A pilha está cheia!\n");
    } else {
        p->itens[++(p->topo)] = pkmn;
    }
}

// Função para desempilhar um pokemon
pokemon popP(Pilha *p) {
    if (pilhaVazia(p)) {
        printf("A pilha está vazia!\n");
        exit(1); // Erro, sair do programa
    } else {
        return p->itens[(p->topo)--];
    }
}

// Função para ver o topo da pilha
pokemon topoP(Pilha *p) {
    if (pilhaVazia(p)) {
        printf("A pilha está vazia!\n");
        exit(1); // Erro, sair do programa
    } else {
        return p->itens[p->topo];
    }
}


#endif
