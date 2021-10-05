#include <stdio.h>

int main(){
	int tab[50];
	int tab1[50];
	int n2 = 0;
	int tab2[50];
	int nb;
	do{
		printf("Rentrez le nombre d'éléments : \n");
		fflush(stdout);
		scanf("%d", &nb);
	} while (nb>50 || nb<1);
	printf("Les chiffres doivent être rentrés par ordre croissant\n");
	int i;
	for (i=0;i<nb;i++){
		printf("Entrez le chiffre n° %d : ", i+1);
		fflush(stdout);
		scanf("%d", &tab[i]);
		if (i!=0)
		{
			if (tab[i]<tab[i-1]) i-=1;
		}
	}
	printf("Affichage du tableau initial\nvecteur t : ");
	for (i=0; i<nb; ++i){
		printf("%d ", tab[i]);
	}
	printf("\n\nAffichage du tableau après et des effectifs\nvecteur t1 : ");
	tab2[0] = 0;
	for (i=0; i<nb;++i){
		if (i==0){
			tab1[n2]=tab[i];
			tab2[n2]+=1;
			n2++;
			tab2[n2] = 0;
		}
		else if (tab[i-1]!=tab[i]){
			tab1[n2]=tab[i];
			tab2[n2]+=1;
			n2++;
			tab2[n2] = 0;
		}
		else{
			tab2[n2-1]+=1;
		}
	}
	for (i=0; i<n2; ++i){
		printf("%d ", tab1[i]);
	}
	printf("\neffectif : ");
	for (i=0; i<n2; ++i){
		printf("%d ", tab2[i]);
	}
	return 0;
}
