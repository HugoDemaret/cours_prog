#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int x = 15;
    int *pInt = &x;
    int *ptrInt = (int*)malloc(sizeof(int));
    *ptrInt = 100;
    printf("pInt value : %d, adress : %p, add p : %p\n",*pInt,&pInt,pInt);
    printf("ptrInt value : %d, adress : %p, add p : %p\n",*ptrInt,&ptrInt,pInt);
    x = 200;
    printf("pInt value : %d, adress : %p, add p : %p\n",*pInt,&pInt,pInt);
    printf("ptrInt value : %d, adress : %p, add p : %p\n",*ptrInt,&ptrInt,pInt);
    free(ptrInt);
    return 0;
}