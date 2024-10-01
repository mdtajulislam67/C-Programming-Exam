#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=(6+n/2)-1;
    k=1;
    for(int i=1;i<=6+n/2;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
        
            printf("*");
           
        }
            s--;
            k=k+2;
        
        printf("\n");
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++)
        {
        
            printf("*");
           
        }
            
            k=k-2;
            printf("\n");
        }
    return 0;
}