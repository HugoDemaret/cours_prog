#include <stdio.h>

int main() {
    int day,month,year,count;
    printf("Introduisez la date (jour mois année) : ");
    fflush(stdout);
    scanf("%d %d %d",&day,&month,&year);
    if (day) count++;
    if (month) count++;
    if (year) count++;
    printf("Day : %d \n Month : %d \n Year : %d\n", day, month, year);
    printf("Introduisez la date (jour mois année) : ");
    fflush(stdout);
    scanf("%d-%d-%d",&day,&month,&year);
    count = 0;
    if (day) count++;
    if (month) count++;
    if (year) count++;
    printf("Day : %d \n Month : %d \n Year : %d\n", day, month, year);
    return 0;
}