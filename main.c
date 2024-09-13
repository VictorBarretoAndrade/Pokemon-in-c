#include <stdio.h>
#include "fila.h"
#include "pilha.h"


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
}pokemon;


int CriarFroakie(pokemon *p){
    p->nome='Froakie';
    p->vida = p->vidaatual = 39;
    p->h = 
    p-> catchrate = 
    
}

int CriarMudkip(pokemon *p){
    p->nome='Mudkip';
    p->vida =  p->vidaatual = 42;
    p->h = 
    p-> catchrate = 
    
}

int CriarSquirtle(pokemon *p){
    p->nome='Squirtle';
    p->vida =  p->vidaatual = 40;
    p->h = 
    p-> catchrate = 
    
}
int CriarTorchic(pokemon *p){
    p->nome='Torchic';
    p->vida =  p->vidaatual = 40;
    p->h = 
    p-> catchrate = 
    
}
int CriarCyndaquil(pokemon *p){
    p->nome='Cindaquil';
    p->vida =  p->vidaatual = 39;
    p->h = 
    p-> catchrate = 
    
}
int CriarFuecoco(pokemon *p){
    p->nome='Fuecoco';
    p->vida =  p->vidaatual = 47;
    p->h = 
    p-> catchrate = 
    
}
int CriarChikorita(pokemon *p){
    p->nome='Chikorita';
    p->vida =  p->vidaatual = 40;
    p->h = 
    p-> catchrate = 
    
}
int CriarTurtwig(pokemon *p){
    p->nome='Turtwig';
    p->vida =  p->vidaatual = 43;
    p->h = 
    p-> catchrate = 
    
}
int CriarTreecko(pokemon *p){
    p->nome='Treecko';
    p->vida =  p->vidaatual = 39;
    p->h = 
    p-> catchrate = 
    
}
int CriarGrimer(pokemon *p){
    p->nome='Grimer';
    p->vida =  p->vidaatual = 51;
    p->h = 
    p-> catchrate = 
    
}
int CriarEkans(pokemon *p){
    p->nome='Ekans';
    p->vida =  p->vidaatual = 37;
    p->h = 
    p-> catchrate = 
    
}
int CriarKoffin(pokemon *p){
    p->nome='Koffing';
    p->vida =  p->vidaatual = 39;
    p->h = 
    p-> catchrate = 
    
}
int CriarSandshrew(pokemon *p){
    p->nome='Sandshrew';
    p->vida =  p->vidaatual = 42;
    p->h = 
    p-> catchrate = 
    
}
int CriarDiglett(pokemon *p){
    p->nome='Diglett';
    p->vida =  p->vidaatual = 30;
    p->h = 
    p-> catchrate = 
    
}
int CriarCubone(pokemon *p){
    p->nome='Cubone';
    p->vida =  p->vidaatual = 42;
    p->h = 
    p-> catchrate = 
    
}

//cria todos os pokemons aqui



int main()
{
    char p1[20], p2[20], p3[20];
    
    tp_pilha pescolhidos;
    InicializarPilha(&pescolhidos);
    
    char nome[25];
    printf("Digite seu nome:\n");
    scanf(" %s", nome);


    printf("Digite quais destes pokemons você quer em sua equipe: \n");
    //printa os pokemons q pedro fez aqui

    scanf(" %s", p1);
    scanf(" %s", p2);
    scanf(" %s", p2);
    pokemon pikachu; // cria uma variável do tipo pokemon
  
    
    
    
    
    printf("Digite quais destes pokemons você quer em sua equipe: \n");
    

    return 0;
}
