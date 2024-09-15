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
    char tipo;
}pokemon;


int CriarFroakie(pokemon *p){
    p->nome='Froakie';
    p->vida = p->vidaatual = 39;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}

int CriarMudkip(pokemon *p){
    p->nome='Mudkip';
    p->vida =  p->vidaatual = 42;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}

int CriarSquirtle(pokemon *p){
    p->nome='Squirtle';
    p->vida =  p->vidaatual = 40;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarTorchic(pokemon *p){
    p->nome='Torchic';
    p->vida =  p->vidaatual = 40;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarCyndaquil(pokemon *p){
    p->nome='Cindaquil';
    p->vida =  p->vidaatual = 39;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarFuecoco(pokemon *p){
    p->nome='Fuecoco';
    p->vida =  p->vidaatual = 47;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarChikorita(pokemon *p){
    p->nome='Chikorita';
    p->vida =  p->vidaatual = 40;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarTurtwig(pokemon *p){
    p->nome='Turtwig';
    p->vida =  p->vidaatual = 43;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarTreecko(pokemon *p){
    p->nome='Treecko';
    p->vida =  p->vidaatual = 39;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarGrimer(pokemon *p){
    p->nome='Grimer';
    p->vida =  p->vidaatual = 51;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarEkans(pokemon *p){
    p->nome='Ekans';
    p->vida =  p->vidaatual = 37;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarKoffin(pokemon *p){
    p->nome='Koffing';
    p->vida =  p->vidaatual = 39;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarSandshrew(pokemon *p){
    p->nome='Sandshrew';
    p->vida =  p->vidaatual = 42;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarDiglett(pokemon *p){
    p->nome='Diglett';
    p->vida =  p->vidaatual = 30;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}
int CriarCubone(pokemon *p){
    p->nome='Cubone';
    p->vida =  p->vidaatual = 42;
    p->h1 = 
    p->h2 = 
    p-> catchrate = 
    
}

//cria todos os pokemons aqui



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
   
    
    char p1[20], p2[20], p3[20];
    
    tp_pilha pescolhidos;
    InicializarPilha(&pescolhidos);
    
    char nome[25];
    printf("Digite seu nome:\n");
    scanf(" %s", nome);


    printf("Digite quais destes pokemons você quer em sua equipe:(1,2,3,4,5,67,8,9,10,11,12,13,14,15) \n");

    //printa os pokemons q pedro fez aqui

    scanf(" %s", p1);
    scanf(" %s", p2);
    scanf(" %s", p2);

    push(&pescolhidos, p1);
    push(&pescolhidos, p2);
    push(&pescolhidos, p3);

    pokemon pikachu; // cria uma variável do tipo pokemon
      
   

    return 0;
}
