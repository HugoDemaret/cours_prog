#include <stdio.h>

int main(void) {
    int nb,somme,n,produit = 1;
    float moyenne;
    while (nb > 15 && nb <1) {
        printf("Entrez un nombre de nombre à rentrer : \n");
        fflush(stdout);
        scanf("%d",&nb);
        for (int i =0;i<nb;++i) {
            scanf("%i",&n);
            somme += n;
            produit *= n;
        }
    }
    moyenne = (float)somme/(float)nb;
    printf("Moyenne : %f\nSomme : %i\nProduit : %i\n",moyenne,somme,produit);
    return 0;
}