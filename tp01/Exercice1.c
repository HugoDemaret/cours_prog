/* programme de calcul de circonférence */

#include <stdio.h>

float circonference(float rayon) {
    float pi = 3.1415, circon;
    circon = 2*pi*rayon;
    return circon;
}

int main() {
    float r;
    int i, n =5;
    /* saisie par l'utilisateur de n rayons et calcul des n circonférences correspondantes */
    for (i = 0; i<n ; i++) {
        printf("Saisie du rayon n°%d\n", i);
        scanf("%f", &r);
        printf("La circonférence est de : %.2f\n", circonference(r));
        return 1;
    }
}
