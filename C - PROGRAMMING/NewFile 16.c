#include<stdio.h>
int main(int argc, char** argv)
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	
	age>=18 ? printf("adult \n"): printf("not adult \n");
	
	return 0;
}