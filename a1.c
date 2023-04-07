#include <stdio.h>
int main()
{
    int arr[4],i,*p;
    for(i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
    }
    p=&arr[0];
     for(i=0; i<4; i++)
    {
        printf("%d  ",*p);
        p++;
    }
    return 0;
}

