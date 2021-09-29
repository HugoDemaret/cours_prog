#include <stdio.h>

int main(void) {
    printf("Entrez quatre entiers : \n");
    fflush(stdout);
    int a,b,c,d,e;
    scanf("%d",&a);
    e = a;
    printf("%d\n",e);
    fflush(stdout);
    scanf("%d",&b);
    e +=b;
    printf("%d\n",e);
    fflush(stdout);
    scanf("%d",&c);
    e+=c;
    printf("%d\n",e);
    fflush(stdout);
    scanf("%d",&d);
    e+=d;
    printf("%d\n",e);
    fflush(stdout);
    return 0;
}