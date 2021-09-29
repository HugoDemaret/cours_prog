#include <stdio.h>

int main(void) {
    int a,b;
    printf("Entrez deux entiers : \n");
    scanf("%d %d",&a,&b);
    printf("quotient : %f\n reste : %i", (float)a/(float)b, a%b);
    return 0;
}