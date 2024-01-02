#include <stdio.h>
int main()
{
	float TC,TF;
	printf("enter the temperature in celsius");
    scanf("%f",&TC);
    TF=((9*TC)/5)+32;
    printf("enter the temperature in fahrenheit %f",TF);
    return 0;
}
