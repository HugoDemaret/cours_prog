#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int nb = 0;
    while (0<nb || nb>50) {
    printf("Entrez la valeur de nb :\n");
    fflush(stdout);
    scanf("%d",&nb);
    fflush(stdin);
    }
    int *t1 = NULL;
    *t1 = (int*)malloc(nb*sizeof(int));
    for (int i = 0; i<nb; ++i) {
        printf("Entrez la valeur numéro %d\n",i);
        fflush(stdout);
        scanf("%d",&t1[i]);
        for (int j = 0; j<i+1; ++j) {
            if (t1[i] == t1[j])
        }
    }
    free(t1);
    return 0;
}