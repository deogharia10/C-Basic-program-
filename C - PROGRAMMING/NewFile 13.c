/*Your bag three grocery items suger,soap,salt.read individual items unit print them read amont of itam brought.finally give discount of 10% and show the total amount?*/

#include<stdio.h>
int main()
{
    float u_suger,u_soap,u_salt,amount=0,g_suger,g_soap,g_salt;
	printf("enter price of suger per unit : \n");
	scanf("%f",&u_suger);
	printf("enter price of soap per unit : \n");
	scanf("%f",&u_soap);
	printf("enter price of salt per unit : \n");
	scanf("%f",&u_salt);
	
	printf("enter the amount of suger: \n");
	scanf("%f",&g_suger);
	printf("enter the amount of soap: \n");
	scanf("%f",&g_soap);
	printf("enter the amount of solt: \n");
	scanf("%f",&g_salt);
	
	amount=0.9*((u_suger*g_suger)+(u_soap*g_soap)+(u_salt*g_salt));
	
	
	printf("total amount after discount=%f \n",amount);
	return 0;
	
	
}