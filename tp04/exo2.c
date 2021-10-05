#include <stdio.h>

int main(){
	int tab[30];
	int n;
	do{
		printf("Rentrez le nombre d'éléments à saisir (nb<=30) : ");
		fflush(stdout);
		scanf("%d", &n);
	} while (n>30 || n<1);
	int i;
	for (i=0;i<n;++i){
		printf("Entrez t[%d] : ", i+1);
		fflush(stdout);
		scanf("%d", &tab[i]);
	}
	printf("Affichage du tableau initial\n\nvecteur t : ");
	for (i=0; i<n;++i){
		printf("%d ", tab[i]);
	}
	for (i=0; i<=((n-1)/2);++i){
		tab[i] += tab[n-1-i];
		tab[n-1-i] = tab[i] - tab[n-1-i];
		tab[i] = tab[i] - tab[n-1-i];
	}
	printf("Affichage du tableau après inversion\n\nvecteur t inversé : ");
	for (i=0; i<n; ++i){
		printf("%d ", tab[i]);
	}
	return 0;
}
