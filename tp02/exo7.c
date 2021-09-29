#include <stdio.h>

int main(void) {
    float a,b;
    printf("Entrez les deux nombres a-b: \n");
    fflush(stdout);
    scanf("%f-%f",&a,&b);
    char choice;
    printf("Addition\tA\n");
    printf("Soustraction\tS\n");
    printf("Multiplication\tM\n");
    printf("Division\tD\n");
    printf("Quitter\tQ\n");
    printf("Votre choix ?\n");
    fflush(stdout);
    scanf("%c",&choice);
    switch (choice) {
        case 'Q':
            return 0;
        case 'A':
            printf("A+B=%f",a+b);
            break;
        case 'S':
            printf("A-B=%f",a-b);
            break;
        case 'M':
            printf("A*B=%f",a*b);
            break;
        case 'D':
            printf("A/B=%f",a/b);
            break;
    }
    return 0;
}