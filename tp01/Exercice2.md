#include <stdio.h>

int nombre;

float pasmain() {
    printf("Bonjour");
    return 0; 
}
int main() {
    nombre = 4;
    pasmain();
    printf("aurevoir");
    return 1;
}