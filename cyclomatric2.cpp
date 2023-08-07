#include<stdio.h>
#include<conio.h>
#include<math.h>
int i,SS[3];
float kloc,E[3],D[3],P[3];
float a[3]={2.4,3.0,3.6};
float b[3]={1.05,1.12,1.20};
float c[3]={2.5,2.5,2.5};
float d[3]={0.38,0.35,0.32};
void calc(int i);
int main()
{
	printf("\nenter the value of kloc:");
	scanf("%f",&kloc);
	printf("\n\nESTIMATIONS FOR BASIC COCOMO ARE:");
	printf("\n\nfor organic mode:");
	calc(0);
	printf("\n\nfor semidetatched mode:");
	calc(1);
	printf("\n\nfor embedded mode:");
	calc(2);
    getch();
	
}
void calc(int i)
{
	E[i]=a[i]*(pow(kloc,b[i]));
	D[i]=c[i]*(pow(E[i],D[i]));
	printf("\n\teffort,E=%fPM",E[i]);
	printf("\n\tdevelopmenttime,D=%fM",D[i]);
	}



