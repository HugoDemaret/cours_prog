#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *converter(char* chaine,int size){
    for (int i = 0; i<size;++i){
        if ((chaine[i]>64)&&(chaine[i]<91)){
            chaine[i] += 32;
        } else if ((chaine[i]>96)&&(chaine[i]<123)) {
            chaine[i] -= 32;
        }
    }
    return chaine;
}

int main(void){
    int nb;
    printf("Entrez la longueur de la chaîne :\n");
    fflush(stdout);
    scanf("%i",&nb);
    fflush(stdin);
    char *chaine = (char *)malloc(nb*sizeof(char));
    printf("Entrez la chaine (taille - 1) :\n");
    fflush(stdout);
    fgets(chaine,nb,stdin);
    fflush(stdin);
    printf("Avant modification : \n");
    for (int i = 0; i<nb-1; ++i) {
        printf("%c",chaine[i]);
    }
    printf("Après modification : \n");
    converter(chaine,nb-1);
    for (int i = 0; i<nb-1; ++i) {
        printf("%c",chaine[i]);
    }
    free(chaine);
    return 0;
}