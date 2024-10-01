#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int m,a,b,c;
    scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
    long long int m1=(a*b*c);
    if(m%m1==0)
    {
        printf("%lld",m/m1);
        
    }
    else
    {
        printf("-1");
    }
    printf("\n");
            
    }
    
    return 0;
}