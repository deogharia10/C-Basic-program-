#include<stdio.h>
int main(int argc, char** argv);/*W.A.P GIVE TO A STUDENT 1)MARKS<30 IS C,2)70<=MAEKS<70 IS B,3)90<=MARKS<=100 IS A+*/
	
{
		
	int marks;
	printf("enter number(0-100):");
	scanf("%d",&marks);
	
	if(marks<30){
		printf("C \n");
	}
      else if(marsk>=30 && marks<70){
		printf("B \n");
	}
      else if(marsk>=70 && marks<90){
	  	printf("A \n");
    }
	  else{
	  	printf("A+ /n");
	  }	  	
	
	return 0;
}