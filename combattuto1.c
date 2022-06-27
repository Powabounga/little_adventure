#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int combattuto1(void) {		// BESOIN D'UN OPTI



	int nombreDeVie = 5;
	int puiperso = 2;


	int puipetitogre = 1;
	int puipetitogrecostaud = 2;
	int puimoyenogre = 4;


	int petitogre = 1;
	int petitogrecostaud = 2;
	int moyenogre = 3;


	int choix = scanf_s;

	scanf_s("%d", &choix);


	while (puiperso < 3 || nombreDeVie > 0) {


		if (choix == 1) {

			printf("\t Tu as choisi le %d, bam dans sa bouche d'Ogre ! Continue comme ca !\n", choix);

			puiperso = puipetitogre + puiperso;

			printf("\t Ta puissance est maintenant de %d !", puiperso);

			break;


		}
		else {

			printf("\tOups, tu as choisi le %d, tu perd une vie !\n\n", choix);

			nombreDeVie--;

			printf("\tIl te reste %d vies ! Attention !\n\n", nombreDeVie);

			scanf_s("%d", &choix);

			if (nombreDeVie == 0) {

				printf("Dommage !");

				return(0);
			}

			else {

				continue;
			}
		}
	}


	while (puiperso < 5 || nombreDeVie > 0) {

		printf("\n\n\t\t===IL RESTE ENCORE 2 ENNEMIS !!===\n\n");
		printf("\t 2.Moyen Ogre (Puissance 4)\n");
		printf("\t 3. Petit Ogre Costaud (Puissance 2)\n\n");


		scanf_s("%d", &choix);

		if (choix == 3) {

			printf("\t Tu as choisi le %d, bim dans les dents !\n", choix);

			printf("\t Allez plus qu'un !!\n");

			puiperso = puipetitogrecostaud + puiperso;

			printf("\t Ta puissance est maintenant de %d !\n\n", puiperso);


			break;

		}
		else {

			printf("\tOups, tu as choisi le %d, tu perd une vie !\n\n", choix);

			nombreDeVie--;

			printf("\tIl te reste %d vies ! Attention !\n\n", nombreDeVie);

			continue;

			if (nombreDeVie == 0) {

				printf("Dommage !");

				return(0);
			}
			else {

				continue;

			}
		}
	}

	while (puiperso < 9 || nombreDeVie > 0) {

		printf("\t\t===IL RESTE UN ENNEMI ! TU VAS GAGNER !===\n\n");
		printf("\t2. Moyen Ogre (Puissance 4)\n\n");
		printf("\tTu sais ce qu'il te reste a faire...\n");


		scanf_s("%d", &choix);

		if (choix == 2) {

			puiperso = puimoyenogre + puiperso;

			printf("\tBAAAM ! Tu as battu le %d!\n", choix);

			printf("\tTu as maintenant %d de puissance !\n", puiperso);

			break;

		}

		else {
			printf("\tOups, tu as choisi le %d, tu perd une vie !\n\n", choix);

			nombreDeVie--;

			printf("\tIl te reste %d vies ! Attention !\n\n", nombreDeVie);

			continue;

			if (nombreDeVie == 0) {

				printf("Dommage !");

				return(0);
			}
			else {

				continue;

			}

		}

	}

	printf("\n\n\t\tBravo !!\n\n");
	printf("\tTu as reussi ton premier combat (c'est vrai que c'etait pas tres dur)\n");
	printf("\tMaintenant que tu as compris comment cela fonctionne nous pouvons avancer !\n");
	printf("\tD'ailleurs tu dois savoir...\n");
	printf("\tLa puissance des monstres va augmenter assez rapidement\n");
	printf("\tPour l'instant nous avons vu que de la logique simple mais prepare toi a reflechir un peu plus !\n");
	printf("\tAussi, pour que ca soit plus simple tu gagneras une vie et 1 de puissance a chaque niveaux\n\n");
	puiperso++;
	nombreDeVie++;
	printf("\tTu as donc %d de puissance et %d vies !\n\n", puiperso, nombreDeVie);
	printf("\tSi tu es pret, tape sur 1, sinon pour partir tape sur 2 !\n\n");



	scanf_s("%d", &choix);

	if (choix == 1) {

		printf("\tAlors c'est partie, continuons notre petite aventure\n\n");

		return 0;

	}

	else {

		printf("\n\tDommage apres un si bon debut... A bientot !\n");

		exit(0);

	}

}