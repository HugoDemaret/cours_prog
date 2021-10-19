#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int size, nb;
    int numbs[7] = {1,5,10,50,100,500,1000};
    char roms[7] = {'I','V','X','L','C','D','M'};
    printf("Entrez la taille de votre nombre : \n");
    fflush(stdout);
    scanf("%i",&size);
    fflush(stdin);
    char *number = (char *)malloc(size*sizeof(char));
    printf("Entrez le nombre en chiffres romains : \n");
    fflush(stdout);
    fgets(number,size,stdin);
    fflush(stdin);
    int last = 0;
    for (int i=size-2;i>=0;--i){
        for (int j = 0; j<7; ++j){
            if (number[i]==roms[j]){
                if (last >= numbs[j]){
                    nb -= numbs[j];
                } else {
                    nb += numbs[j];
                }
                last = numbs[j];
                printf("last : %i\n",last);
            }
        }
    }
    printf("Nombre : %i",nb);
    free(number);
    return 0;
}