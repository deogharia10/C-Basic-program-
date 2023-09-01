#include<stdio.h>
int main()
{
	float basic,gross;
	printf("please enter your basic salary:");
	scanf("%f",&basic);
	gross=basic+basic*0.03+basic*0.12;
	printf("your gross salary is:%f",gross);
	return 0;
}
