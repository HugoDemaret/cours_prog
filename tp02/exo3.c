#include <stdio.h>
#define PI 3.1415
int main(void) {
    float c,  aire_tot, aire;
    printf("Entrez la valeur de c : \n");
    scanf("%f",&c);
    aire_tot = c*c;
    aire = aire_tot-(PI*(c/2)*(c/2));
    printf("%f",aire);
    return 0;
}