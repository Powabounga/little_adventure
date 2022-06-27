#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int depart(void) {  // Commencer?

	int commencer = 1;

	printf("\tSi vous souhaitez partir a l'aventure tapez 1 sinon tapez 2\n");
	scanf_s("%d", &commencer);

	if (commencer == 1) {
		printf("\tVraiment? Vous avez choisi %d alors c'est partie !\n\n", commencer);
		return 0;
	}
	else if (commencer == 2) {
		printf("\tDommage... Revenez quand vous voulez !\n ");
		exit(0);
	}
	else {
		printf("\tVous vous moquez de moi?! Si c'est comme ca j'me casse !\n");
		exit(0);
	}

}