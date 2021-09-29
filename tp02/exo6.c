#include <stdio.h>
#include <math.h>

int main(void) {
    printf("Entrez a-b-c : \n");
    float a,b,c,delta;
    fflush(stdout);
    scanf("%f-%f-%f",&a,&b,&c);
    delta = b*b - 4*(a*c);
    if (delta <0) {
        printf("No real solution");
        return 0;
    } else if (delta == 0) {
        printf("Solution : %f", (-b)/(2*a));
        return 0;
    } else {
        float x1 = (-b-sqrt(delta))/(2*a);
        float x2 = (-b+sqrt(delta))/(2*a);
        printf("Solution x1 : %f\nSolution x2 : %f\n",x1,x2);
        return 0;
    }
}