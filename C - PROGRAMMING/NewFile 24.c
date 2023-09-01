#include<stdio.h>
int main(int argc, char** argv)
{
	int a,b;
	printf("enter the two number \n");
	scanf("%d",&a,&b);
	
	if(a>b)
		printf("%d is a max number \n", a);
	else
		printf("%d is a max number \n",b);
	return 0;
}