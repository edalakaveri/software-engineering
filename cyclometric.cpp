#include<stdio.h>
#include<conio.h>
int main()
{
	int E,N,P,CC;
	printf("\nprogram to find cyclomatic complexity:");
	printf("\nenter the number of edges in the flow graph:");
	scanf("%d",&E);
	printf("\nenter the number of nodes in the flow graph:");
	scanf("%d",&N);
	printf("\nenter the number of predicate nodes in the flow graph:");
	scanf("%d",&P);
	CC=E-N+(2*P);
	printf("\n the cyclometric complexity of the flow graph is:%d",CC);
	return 0;
}
