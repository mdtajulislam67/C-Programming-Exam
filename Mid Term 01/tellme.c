#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
         scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int value=0;
    for (int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
        value=1;
        break;
        }
        
    }
     if(value)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}