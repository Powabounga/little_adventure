#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int tuto(void) {	// Tuto 

	int reponsetuto = 1;

	printf("\tBienvenue dans la ~Petite aventure~ !\n");
	printf("\tJe suis ton guide pour t'aider a survivre, c'est gratuit t'inquiete pas\n");
	printf("\tTout au long de cette aventure tu vas affronter differents monstres (des pas-gentils hein)\n");
	printf("\tChaque monstre a un niveau de puissance ecrit a droite de son nom\n");
	printf("\tPour l'instant tu as 2 de puissance !\n");
	printf("\tChoisi a chaque fois le plus faible pour le battre et augmenter ta puissance !\n");
	printf("\tChaque fois que tu perd un combat tu perd une vie, attention tu n'en as pas beaucoup !\n");
	printf("\tPour l'instant tu n'as que ca a savoir...\n\n");
	printf("\tSi tu es pret tape 1 pour acceder au premier combat !\n\n");

	scanf_s("%d", &reponsetuto);

	if (reponsetuto == 1) {
		printf("\tTu as choisi %d alors c'est partie !\n\n", reponsetuto);
		return 0;
	}
	else {
		printf("\tJe n'ai pas compris\n");
		exit(0);
	}
}
