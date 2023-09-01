/*read a floting point number and point the right most digit of the integral part 12345.98==== 5*/
#include<stdio.h>
int main(int argc, char** argv)
{
	float x;
	printf("enter a floating point number :");
	scanf("%f",&x);
	int y,d;
	y=x;
	d=y%10;
	printf("the right most digit of the integral part :%d \n",d);   
	return 0;
}