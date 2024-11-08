#ifndef FILA_H
#define FILA_H
#include <stdio.h>
#define MAX 10

typedef int
tp_item;

typedef struct {
tp_item item[MAX];
int ini, fim;
int tam;
} tp_fila;

void iniciaFila(tp_fila *f) {
f->ini= f->fim = MAX-1;
f->tam = 0;
}

int filaVazia(tp_fila *f){
if (f->fim == f->ini) return 1;
return 0;
}

int proximo(int pos){
if(pos == MAX-1) return 0;
pos++;
return pos;
}

int filaCheia(tp_fila *f){
if(proximo(f->fim) == f->ini)
return 1;
return 0;
}

int insereFila(tp_fila *f, tp_item e){
if (filaCheia(f))
return 0;
f->fim = proximo(f->fim);
f->item[f->fim] = e;
f->tam ++;
return 1;
}

int retiraFila(tp_fila *f, tp_item *e){
if(filaVazia(f))
return 0;
f->ini = proximo(f->ini);
*e = f->item[f->ini];
f->tam --;
return 1;
}

int tamanhoFila(tp_fila *f){ //melhor eficiência
if (filaVazia(f)) {
return 0; }
if(f->ini < f->fim) {
return f->fim - f->ini;
return MAX - 1 - f->ini + f->fim +1;
}
}

int tamanhoFila2(tp_fila f){
int cont = 0;
tp_item e;
while (!filaVazia(&f)){
retiraFila(&f, &e);
cont++;
return cont;
}
}
#endif
