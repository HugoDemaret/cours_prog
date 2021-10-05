#include <stdio.h>

int main(void){
	int tab [10][10];
	int tab2 [10][10];
	int nl;
	do{
		printf("Entrez le nombre de lignes de votre matrice (<10) : \n");
		scanf("%d", &nl);
	} while (nl>9 || nl<1);
	int nc;
	do{
		printf("Entrez le nombre de colonnes de votre matrice (<10) : \n");
		scanf("%d", &nc);
	} while (nc>9 || nc<1);
	int i, j;
	for (i=0;i<nl;++i){
		for (j=0; j<nc; ++j){
			printf("Entrez la valeur de matrice [%d][%d] : ", i,j);
			fflush(stdout);
			scanf("%d", &tab[i][j]);
		}
	}
	printf("Affichage de la matrice\n");
	for (i=0; i<nl; ++i){
		for (j=0; j<nc; ++j){
			printf("%d ", tab[i][j]);
		}
		printf("\n");
	}

	for (i=0; i<nl; ++i){
		for (j=0; j<nc; ++j){
			tab2 [j][i] = tab [i][j];
		}
	}
	printf("Affichage de la matrice transposée\n");
	for (i=0; i<nc; ++i){
		for (j=0; j<nl; ++j){
			printf("%d ", tab2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
