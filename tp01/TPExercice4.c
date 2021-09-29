#include <stdio.h>

int main() {
    long int a, b, S, P, C1, C2;
    printf("Entrez a et b : \n");
    fflush(stdout);
    scanf("%ld %ld",&a,&b);
    S = a+b;
    P = a*b;
    C1 = a*a;
    C2 = b*b;
    printf("a = %ld, b = %ld, S = %ld, P = %ld, C1 = %ld, C2 = %ld",a,b,S,P,C1,C2);
    return 0;
}