#include <stdio.h>
#include "fila.h"
#include "pilha.h"
#include <stdlib.h>
#include <time.h>

void embaralhar(int *pilha, int tamanho) {
    
    srand(time(NULL));

   
    for (int i = tamanho - 1; i > 0; i--) {

        int j = rand() % (i + 1);


        int auxiliar = pilha[i];
        pilha[i] = pilha[j];
        pilha[j] = auxiliar;
    }
}

void removerelementos(int vetor[], int valor1, int valor2, int valor3) {
    int i, j,tamanho=12;

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == valor1 || vetor[i] == valor2 || vetor[i] == valor3) {
            for (j = i; j < tamanho - 1; j++) {
                vetor[j] = vetor[j + 1];
            }
            (tamanho)--;
            i--;
        }
    }
}


typedef struct{
    int dano;
    char tipo[25]; //determina se serão super efetivos, normais ou pouco efetivos contra outro pokémon 
}habilidade;

typedef struct{
    char nome[25];
    int vidamax; //vida máxima do pokemon
    int vidaatual; //vida atual do pokemon
    habilidade h1;
    habilidade h2;
    tp_fila habilidades;
    InicializaFila(&habilidades);
    InsereFila(&habilidades, h1);
    InsereFila(&habilidades, h2)
    int catchrate;
    int nivel;
    char tipo;
}pokemon;


int main()
{

    habilidade arma_de_agua;
    arma_de_agua.dano = 20;
    strcpy(arma_de_agua.tipo, "agua");

    habilidade brasa;
    brasa.dano = 20;
    strcpy(brasa.tipo, "fogo");

    habilidade folhagem;
    folhagem.dano = 20;
    strcpy(folhagem.tipo, "planta");

    habilidade acido;
    acido.dano = 20;
    strcpy(acido.tipo, "acido");

    habilidade enfrentar;
    enfrentar.dano = 20;
    strcpy(enfrentar.tipo, "normal");
    
    habilidade tiro_de_lama;
    tiro_de_lama.dano = 20;
    strcpy(tiro_de_lama.tipo, "terra");
    
    pokemon Froakie;
    Froakie.h1 = arma_de_agua;
    Froakie.h2 = enfrentar;
    
    pokemon Mudkip;
    Mudkip.h1 = arma_de_agua;
    Mudkip.h2 = enfrentar;
    
    pokemon Squirtle;
    Squirtle.h1 = arma_de_agua;
    Squirtle.h1 = enfrentar;
    
    pokemon Torchic;
    Torchic.h1 = brasa;
    Torchic.h2 = enfrentar;
    
    pokemon Cyndaquil;
    Cyndaquil.h1 = brasa;
    Cyndaquil.h2 = enfrentar;
    
    pokemon Fuecoco;
    Fuecoco.h1 = brasa;
    Fuecoco.h2 = enfrentar;
    
    pokemon Chikorita;
    Chikorita.h1 = folhagem;
    Chikorita.h2 = enfrentar;
    
    pokemon Turtwig;
    Turtwig.h1 = folhagem;
    Turtwig.h2 = enfrentar;
    
    pokemon Treecko;
    Treecko.h1 = folhagem;
    Treecko.h2 = enfrentar;
    
    pokemon Grimer;
    Grimer.h1 = acido;
    Grimer.h2 = enfrentar;
    
    pokemon Ekans;
    Ekans.h1 = acido;
    Ekans.h2 = enfrentar;
    
    pokemon Koffin;
    Koffin.h1 = acido;
    Koffin.h2 = enfrentar;
    
    pokemon Sandshrew;
    Sandshrew.h1 = tiro_de_lama;
    Sandshrew.h2 = enfrentar;
    
    pokemon Diglett;
    Diglett.h1 = tiro_de_lama;
    Diglett.h2 = enfrentar;
    
    pokemon Cubone;
    Cubone.h1 = tiro_de_lama;
    Cubone.h2 = enfrentar;
   
    
    int p1, p2, p3, vet[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    
    tp_pilha pescolhidos;
    InicializarPilha(&pescolhidos);
    
    char nome[25];
    printf("Digite seu nome:\n");
    scanf(" %s", nome);


    printf("Digite quais destes pokemons você quer em sua equipe:(1,2,3,4,5,67,8,9,10,11,12,13,14,15) \n");

    //printa os pokemons q pedro fez aqui

    scanf(" %d", p1);
    scanf(" %d", p2);
    scanf(" %d", p3);

    push(&pescolhidos, p1);
    push(&pescolhidos, p2);
    push(&pescolhidos, p3);
    removerelementos(vet, p1, p2, p3);

    pokemon pikachu; // cria uma variável do tipo pokemon
      
   

    return 0;
}
