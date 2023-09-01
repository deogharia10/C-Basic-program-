#include<stdio.h>
int main(int argc, char** argv) //W.A.P PASS OR FAIL
{
	int marks;
	printf("enter number(0-100):");
	scanf("%d",&marks);
	
	if(marks>=0 && marks<=30){
		printf("FAIL \n");
	}else if(marks>30 && marks<=100){
		printf("PASS \n");
	}else{
		printf("wrong marks \n");
	}
	
	return 0;
}