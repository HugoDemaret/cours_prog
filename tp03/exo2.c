#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nb;
    float *tab = (float*)malloc(nb*sizeof(float));
    float temp,min,max;
    printf("Rentrez le nombre de nombres à rentrer :\n");
    fflush(stdout);
    scanf("%d",&nb); 
    fflush(stdin);
    for (int i = 0; i<nb; ++i) {
        temp = 0;
        printf("Rentrez un nombre réel :\n");
        fflush(stdout); 
        scanf("%f",&temp);
        fflush(stdin);
        *(tab+i) = temp;
        printf("Valeur :%f ",*(tab+i));
        printf("Case pointée : %p\n",&tab+i);
    }
    max = tab[0];
    min = tab[0];
    for (int j = 0; j<nb; ++j) {
        if (tab[j]<min) min = tab[j];
        if (tab[j]>max) max = tab[j];
    }
    printf("Min = %f \n Max = %f", min,max);
    free(tab);
    return 0;
}