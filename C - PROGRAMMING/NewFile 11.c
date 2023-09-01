//write a program chak the parsen is voter or non-voter?
#include<stdio.h>
int main ()

{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	
	if(age>=18){
	printf("adult \n");
	printf("they can votar \n");
	printf("they can drive \n");
	
	}
	else{
		printf("not adult \n");
	}
		return 0; 
}