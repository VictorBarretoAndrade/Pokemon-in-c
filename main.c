#include <stdio.h>
#include "fila.h"
#include "pilha.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "disppoke.h"
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
	int i, j,tamanho=15;

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


typedef struct {
	int dano;
	char tipo[25]; //determina se serC#o super efetivos, normais ou pouco efetivos contra outro pokC)mon
} habilidade;

typedef struct {
	char nome[25];
	int vidamax; //vida mC!xima do pokemon
	int vidaatual; //vida atual do pokemon
	habilidade h1;
	habilidade h2;
	int catchrate;
	int nivel;
	char tipo;
} pokemon;



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

	char hab[20];
	int e, e2;
	/*
	arma de C!gua = 1
	brasa = 2
	folhagem = 3
	C!cido = 4
	tiro de lama = 5
	enfrentar = 6
	*/
	pokemon Froakie;
	tp_fila hfroakie;
	insereFila (&hfroakie, 1);
	insereFila (&hfroakie, 6);
	retiraFila (&hfroakie, &e);
	retiraFila (&hfroakie, &e2);
	if(e==1) {
		Froakie.h1 = arma_de_agua;
	}
	if(e2==6) {
		Froakie.h2 = enfrentar;
	}



	pokemon Mudkip;
	tp_fila hmudkip;
	iniciaFila(&hmudkip);
	insereFila (&hmudkip, 1);
	insereFila (&hmudkip, 6);
	retiraFila (&hmudkip, &e);
	retiraFila (&hmudkip, &e2);
	if(e==1) {
		Mudkip.h1 = arma_de_agua;
	}
	if(e2==6) {
		Mudkip.h2 = enfrentar;
	}


	pokemon Squirtle;
	tp_fila hsquirtle;
	iniciaFila(&hsquirtle);
	insereFila (&hsquirtle, 1);
	insereFila (&hsquirtle, 6);
	retiraFila (&hsquirtle, &e);
	retiraFila (&hsquirtle, &e2);
	if(e==1) {
		Squirtle.h1 = arma_de_agua;
	}
	if(e2==6) {
		Squirtle.h2 = enfrentar;
	}


	pokemon Torchic;
	tp_fila htorchic;
	iniciaFila(&htorchic);
	insereFila (&htorchic, 2);
	insereFila (&htorchic, 6);
	retiraFila (&htorchic, &e);
	retiraFila (&htorchic, &e2);
	if(e==2) {
		Torchic.h1 = brasa;
	}
	if(e2==6) {
		Torchic.h2 = enfrentar;
	}


	pokemon Cyndaquil;
	tp_fila hcyndaquil;
	iniciaFila(&hcyndaquil);
	insereFila (&hcyndaquil, 2);
	insereFila (&hcyndaquil, 6);
	retiraFila (&hcyndaquil, &e);
	retiraFila (&hcyndaquil, &e2);
	if(e==2) {
		Cyndaquil.h1 = brasa;
	}
	if(e2==6) {
		Cyndaquil.h2 = enfrentar;
	}


	pokemon Fuecoco;
	tp_fila hfuecoco;
	iniciaFila(&hfuecoco);
	insereFila (&hfuecoco, 2);
	insereFila (&hfuecoco, 6);
	retiraFila (&hfuecoco, &e);
	retiraFila (&hfuecoco, &e2);
	if(e==2) {
		Fuecoco.h1 = brasa;
	}
	if(e2==6) {
		Fuecoco.h2 = enfrentar;
	}


	pokemon Chikorita;
	tp_fila hchikorita;
	iniciaFila(&hchikorita);
	insereFila (&hchikorita, 3);
	insereFila (&hchikorita, 6);
	retiraFila (&hchikorita, &e);
	retiraFila (&hchikorita, &e2);
	if(e==3) {
		Chikorita.h1 = folhagem;
	}
	if(e2==6) {
		Chikorita.h2 = enfrentar;
	}


	pokemon Turtwig;
	tp_fila hturtwig;
	iniciaFila(&hturtwig);
	insereFila (&hturtwig, 3);
	insereFila (&hturtwig, 6);
	retiraFila (&hturtwig, &e);
	retiraFila (&hturtwig, &e2);
	if(e==3) {
		Turtwig.h1 = folhagem;
	}
	if(e2==6) {
		Turtwig.h2 = enfrentar;
	}


	pokemon Treecko;
	tp_fila htreecko;
	iniciaFila(&htreecko);
	insereFila (&htreecko, 3);
	insereFila (&htreecko, 6);
	retiraFila (&htreecko, &e);
	retiraFila (&htreecko, &e2);
	if(e==3) {
		Treecko.h1 = folhagem;
	}
	if(e2==6) {
		Treecko.h2 = enfrentar;
	}


	pokemon Grimer;
	tp_fila hgrimer;
	iniciaFila(&hgrimer);
	insereFila (&hgrimer, 4);
	insereFila (&hgrimer, 6);
	retiraFila (&hgrimer, &e);
	retiraFila (&hgrimer, &e2);
	if(e==4) {
		Grimer.h1 = acido;
	}
	if(e2==6) {
		Grimer.h2 = enfrentar;
	}


	pokemon Ekans;
	tp_fila hekans;
	iniciaFila(&hekans);
	insereFila (&hekans, 4);
	insereFila (&hekans, 2);
	retiraFila (&hekans, &e);
	retiraFila (&hekans, &e2);
	if(e==4) {
		Ekans.h1 = acido;
	}
	if(e2==6) {
		Ekans.h2 = enfrentar;
	}

	pokemon Koffin;
	tp_fila hkoffin;
	iniciaFila(&hkoffin);
	insereFila (&hkoffin, 4);
	insereFila (&hkoffin, 6);
	retiraFila (&hkoffin, &e);
	retiraFila (&hkoffin, &e2);
	if(e==4) {
		Koffin.h1 = acido;
	}
	if(e2==6) {
		Koffin.h2 = enfrentar;
	}


	pokemon Sandshrew;
	tp_fila hsandshrew;
	iniciaFila(&hsandshrew);
	insereFila (&hsandshrew, 5);
	insereFila (&hsandshrew, 6);
	retiraFila (&hsandshrew, &e);
	retiraFila (&hsandshrew, &e2);
	if(e==5) {
		Sandshrew.h1 = tiro_de_lama;
	}
	if(e2==6) {
		Sandshrew.h2 = enfrentar;
	}


	pokemon Diglett;

	tp_fila hdiglett;
	iniciaFila(&hdiglett);
	insereFila (&hdiglett, 5);
	insereFila (&hdiglett, 6);
	retiraFila (&hdiglett, &e);
	retiraFila (&hdiglett, &e2);
	if(e==5) {
		Diglett.h1 = tiro_de_lama;
	}
	if(e2==6) {
		Diglett.h2 = enfrentar;
	}


	pokemon Cubone;

	tp_fila hcubone;
	iniciaFila(&hcubone);
	insereFila (&hcubone, 5);
	insereFila (&hcubone, 6);
	retiraFila (&hcubone, &e);
	retiraFila (&hcubone, &e2);
	if(e==5) {
		Cubone.h1 = tiro_de_lama;
	}
	if(e2==6) {
		Cubone.h2 = enfrentar;
	}



	int p1, p2, p3, vet[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	tp_pilha pescolhidos;
	tp_pilha presto;
	InicializarPilha(&pescolhidos);
	InicializarPilha(&presto);
	char nome[25];
	printf("  ____           _       _                          ____\n");
    printf(" / ___|__ _ _ __| |_ ___| |_ __ ___   ___  _ __    / ___| ___   \n");
    printf("| |   / _` | '__| __/ _ \\ | '_ ` _ \\ / _ \\| '_ \\  | |  _ / _ \\  \n");
    printf("| |__| (_| | |  | ||  __/ | | | | | | (_) | | | | | |_| | (_) | \n");
    printf(" \\____\\__,_|_|   \\__\\___|_|_| |_| |_|\\___/|_| |_|  \\____|\\___/  \n");
    printf("\n");
	printf("Digite seu nome:\n");
	scanf(" %s", nome);

#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif

	printf("Digite quais destes pokemons você quer em sua equipe:\nTIPO ÁGUA:   1-Squirtle   2-Mudkip   3-Froakie\nTIPO FOGO:   4-Cyndaquil  5-Torchic  6-Fuecoco\nTIPO PLANTA: 7-Chikorita  8-Treecko  9-Turtwig\nTIPO VENENO: 10-Grimer    11-Ekans   12-Koffing\nTIPO TERRA:  13-Sandshrew 14-Diglett 15-Cubone\n");

	//printa os pokemons q pedro fez aqui

	
char conf='n';
    while(conf != 's'){
        scanf("%d", &p1);
    disppoke(p1);
        scanf(" %c", &conf);
        #ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
	printf("Digite quais destes pokemons você quer em sua equipe:\nTIPO ÁGUA:   1-Squirtle   2-Mudkip   3-Froakie\nTIPO FOGO:   4-Cyndaquil  5-Torchic  6-Fuecoco\nTIPO PLANTA: 7-Chikorita  8-Treecko  9-Turtwig\nTIPO VENENO: 10-Grimer    11-Ekans   12-Koffing\nTIPO TERRA:  13-Sandshrew 14-Diglett 15-Cubone\n");
    }
     conf='n';
     while(conf != 's'){
        scanf("%d", &p2);
    disppoke(p2);
        scanf(" %c", &conf);
                #ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
	printf("Digite quais destes pokemons você quer em sua equipe:\nTIPO ÁGUA:   1-Squirtle   2-Mudkip   3-Froakie\nTIPO FOGO:   4-Cyndaquil  5-Torchic  6-Fuecoco\nTIPO PLANTA: 7-Chikorita  8-Treecko  9-Turtwig\nTIPO VENENO: 10-Grimer    11-Ekans   12-Koffing\nTIPO TERRA:  13-Sandshrew 14-Diglett 15-Cubone\n");
    }
   conf='n';
     while(conf != 's'){
        scanf("%d", &p3);
    disppoke(p3);
        scanf(" %c", &conf);
                #ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
	printf("Digite quais destes pokemons você quer em sua equipe:\nTIPO ÁGUA:   1-Squirtle   2-Mudkip   3-Froakie\nTIPO FOGO:   4-Cyndaquil  5-Torchic  6-Fuecoco\nTIPO PLANTA: 7-Chikorita  8-Treecko  9-Turtwig\nTIPO VENENO: 10-Grimer    11-Ekans   12-Koffing\nTIPO TERRA:  13-Sandshrew 14-Diglett 15-Cubone\n");
    }

	removerelementos(vet, p1, p2, p3);
	embaralhar(vet,12);
	for(int k=0; k<12; k++) {
		push(&presto,vet[k]);
	}
	push(&pescolhidos, p1);
	push(&pescolhidos, p2);
	push(&pescolhidos, p3);

	imprimepoke(pescolhidos);
	imprimepoke(presto);





	return 0;
}
