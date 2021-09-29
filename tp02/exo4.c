#include <stdio.h>

int main(void) {
    char somme;
    char billet = somme%5;
    somme -= billet;
    char piece2 = somme%2;
    somme -=piece2;
    printf("Pièce de 5 : %i, pièce de 2 : %i, pièce de 1 : %i",billet,piece2,somme);
    return 0;
}