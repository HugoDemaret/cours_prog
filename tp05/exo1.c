#include <stdio.h>
#include <stdlib.h>

int mult2(int a){
    if (a%2==0) return 1;
    else return 0;
}

int mult3(int a){
    if (a%3==0) return 1;
    else return 0;
}

int main(void) {
    int a,b,c;
    printf("Entrez un nombre a :\n");
    fflush(stdout);
    scanf("%i",&a);
    fflush(stdin);
    b = mult2(a);
    c = mult3(a);
    if (b+c==2) printf("Multiple de 6\n");
    else if (b==1) printf("Multiple de 2\n");
    else if (c==1) printf("Multiple de 3\n");
    else printf("Ni 2 ni 3.\n");
    return 0;
}