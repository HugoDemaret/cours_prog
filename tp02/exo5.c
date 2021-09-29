#include <stdio.h>

int main()
{
	int x, n, p, inter1, inter2, end;
    printf("Entrez x,n,p : \n");
	printf("x = "); scanf("%d", &x);
	printf("n = "); scanf("%d", &n);
	printf("p = "); scanf("%d", &p);
	
	end = x >> (p-1);
	inter1 = end << (p-1);
	inter1 = x - inter1;
	end = ~end;
	inter2 = end >> n;
	inter2 = inter2 << n;
	inter2 = end - inter2;
	inter2 = inter2 << (p-1);
	end = inter1 + inter2;
	
	printf("Résultat %d.\n", end);
	
	return 0;
}