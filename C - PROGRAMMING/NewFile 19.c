#include<stdio.h>
int main(int argc, char** argv) //W.A.P PASS OR FAIL
{
	int marks;
	printf("enter number(0-100):");
	scanf("%d",&marks);
	
	if(marks<=30){
		printf("FAIL \n");
	}
      else{
		printf("PASS \n");
	}
	
	return 0;
}