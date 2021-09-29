#include <stdio.h>

int main(void){
    printf("Entrez quatre nombres entiers : \n");
    int a,b;
    fflush(stdout);
    scanf("%d",&a);
    b += a;
    scanf("%d",&a);
    b+=a;
    scanf("%d",&a);
    b+=a;
    scanf("%d",&a);
    b+=a;
    printf("%d",b);
    return 0;
}