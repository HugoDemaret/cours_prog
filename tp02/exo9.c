#include <stdio.h>

int main(void) {
    float a,b,c,carre_a,carre_b,carre_c;
    printf("Entrez a-b-c\n");
    scanf("%f-%f-%f",&a,&b,&c);
    carre_a = a*a;
    carre_b = b*b;
    carre_c = c*c;
    if (a==b==c) printf("ABC est équilatéral.\n");
    if (a==b || a==c || b==c) printf("ABC est isocèle.\n");
    if ((carre_a == carre_b + carre_c) || (carre_b == carre_a + carre_c) || (carre_c == carre_a + carre_b)) printf("ABC est rectangle.\n");
    printf("ABC est quelconque.\n");
    return 0;
}