#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int profil(void); // Demande age et pseudo du joueur 
int bienvenue(void); // Accueil 
int depart(void); // Commencer l'aventure 
int tuto(void); // Tuto + compris ?
int apparitioncible1(void); // Apparition 3 premiers mobs
int combattuto1(void); // Le combat 



int main(int argc, char * argv[]) // Lance le programme 
{
	{
		profil();
		bienvenue();
		depart();
		tuto();
		apparitioncible1();
		combattuto1();
		
	}
}
