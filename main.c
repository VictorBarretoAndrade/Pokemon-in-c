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


int CriarFroakie(pokemon *p){
    p->nome='Froakie';
    p->vida = p->vidaatua = 41;
    p->h = 
    p-> catchrate = 
    
}

int CriarMudkip(pokemon *p){
    p->nome='Mudkip';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}

int CriarSquirtle(pokemon *p){
    p->nome='Squirtle';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarTorchic(pokemon *p){
    p->nome='Torchic';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarCyndaquil(pokemon *p){
    p->nome='Cindaquil';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarFuecoco(pokemon *p){
    p->nome='Fuecoco';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarChikorita(pokemon *p){
    p->nome='Chikorita';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarTurtwig(pokemon *p){
    p->nome='Turtwig';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarTreecko(pokemon *p){
    p->nome='Treecko';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarGrimer(pokemon *p){
    p->nome='Grimer';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarEvans(pokemon *p){
    p->nome='Evans';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarKoffin(pokemon *p){
    p->nome='Koffing';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarSandshrew(pokemon *p){
    p->nome='Sandshrew';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarDiglett(pokemon *p){
    p->nome='Diglett';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}
int CriarCubone(pokemon *p){
    p->nome='Cubone';
    p->vida = 
    p->h = 
    p-> catchrate = 
    
}

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
