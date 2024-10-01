#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);

    int Tiger=0;
    int Pathaan=0;
    for (int i=0;i<n;i++)
    {
        if(s[i]=='T')
        {
            Tiger++;
        }
        else if(s[i]=='P')
        {
            Pathaan++;
        }
    }
    if(Tiger>Pathaan)
    {
        printf("Tiger\n");
    }
    else if(Tiger<Pathaan)
    {
        printf("Pathaan\n");
    }
    else{
        printf("Draw\n");
    }

    }
    return 0;
}