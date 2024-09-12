#include <stdio.h>
#include "fila.h"
#include "pilha.h"

typedef struct{
    int dano;
    char tipo[25]; //determina se serão super efetivos, normais ou pouco efetivos contra outro pokémon 
}habilidades;

typedef struct{
    char nome[25];
    int vidamax; //vida máxima do pokemon
    int vidaatual; //vida atual do pokemon
    habilidades h;
    int catchrate;
    int nivel;
}pokemon;


/*int CriarPikachu(pokemon *p){
    p->nome='Pikachu';
    p->vida = p->vidaatua =
    p->h = 
    p-> catchrate = 
    
}

int CriarPikachu(pokemon *p){
    p->nome='Pikachu';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}*/

//cria todos os pokemons aqui



int main()
{
    tp_pilha pescolhidos;
    InicializarPilha(&pescolhidos);
    
    char nome[25];
    printf("Digite seu nome:\n");
    scanf(" %s", nome);
    
    pokemon pikachu; // cria uma variável do tipo pokemon
  
    //CriarPokemon(&pikachu);
    //cria todos os pokemons aqui...
    
    
    printf("Digite quais destes pokemons você quer em sua equipe: \n");
    

    return 0;
}
