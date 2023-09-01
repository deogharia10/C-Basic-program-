//write a progrogram find area of triangle when 3 sides are given
#include<stdio.h>
int main()
{
	float a,b,c,s,area;
	printf("enter the side of triangle:");
	scanf("%f%f%f",&a,&b,&c);
	s=a+b+c/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle is:%f", area);
	return 0;
}