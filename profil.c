#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int profil() {		// Age + pseudo  

	int age = 0;
	char nom[11];

	printf("\tBonjour !\n\n");
	printf("\tAvant tout quel est votre nom ?(10 caracteres max!)\n");
	fgets(nom, 11, stdin);
	printf("\tVous vous appelez %s... \n", nom);
	printf("\tC'est charmant !");



	printf("\n\tQuel age avez-vous?\n");
	scanf_s("%d", &age);

	if (age <= 18) {
		printf("\tDesole mais vous n'avez pas l'age\n");
		exit(0);
	}
	else if (age >= 50) {
		printf("\tDesole mais vous n'avez pas l'age\n");
		exit(0);
	}
	else {
		printf("\tVous avez donc %d ans c'est parfait !\n\n", age);
	}
	return 0;

}
