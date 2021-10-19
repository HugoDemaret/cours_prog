#include <stdlib.h>
#include <stdio.h>

void swap1(int a, int b){
    int c;
    c = a; a = b; b = c;
}

int main(void){
    printf("nb a-b :");
    int a,b;
    scanf("%i-%i",&a,&b);
    swap1(a,b);
    return 0;
}