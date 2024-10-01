#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt_two = 0;
    int cnt_three = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
        {
            cnt_two++;
        }
        else if(a[i]%3 == 0)
        {
            cnt_three++;
        }
    }
    printf("%d %d",cnt_two,cnt_three);
    return 0;
}