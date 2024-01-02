#include <stdio.h>
int main()
{
	float p,r,t,si;
	printf("enter the principal value ");
	scanf("%f",&p);
	printf("enter the rate of interest ");
	scanf("%f",&r);
	printf("enter the number of years ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple interest is %f",si);
	return 0;
}