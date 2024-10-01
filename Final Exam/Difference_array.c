#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    for (int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }

    int c[n];
    for (int i=0;i<n;i++)
    {
        c[i]=abs(a[i]-b[i]);
        printf("%d ",c[i]);
    }
    printf("\n");
            
    } 
    return 0;
}