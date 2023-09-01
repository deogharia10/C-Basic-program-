#include<stdio.h>
int main(int argc, char** argv)
{
	char day; //m-mon.t-tues,w-wed,T,f,s,S
	printf("enter the day(1-7):");
	scanf("%s", &day);
	
	switch(day){
		case 'm': printf("monday \n");
				break;
		case 't': printf("twesday \n");
				break;
		case 'w': printf("wednesday \n");
				break;
		case 'T': printf("thursday \n");
				break;
		case 'f': printf("friday \n");
				break;
		case 's': printf("saturday \n");
				break;
		case 'S': printf("sunday \n");
			   	break;
		defauld : printf("not a valid day! \n");
	}		   	
	return 0;
}