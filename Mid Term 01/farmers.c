#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int m1,m2,d;
    scanf("%d %d %d",&m1,&m2,&d);

    int new_day =(m1*d)/(m1+m2);
    int day =d-new_day;
    printf("%d\n",day);
    }
    return 0;
}