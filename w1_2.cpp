#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int n,i=1,j=1,k;
    printf("Enter size : ");
    scanf("%d",&n);
    i=n*n;
    k=i;
    while(i!=0)
    {
        if((i-1)%n!=0 || i==k)
        {
            printf("*");
            i-=1;
        }
        else if((i-1)%n==0 )
        {
            printf("*\n");
            i -= 1;
        }
    }
    return 0;    
}
