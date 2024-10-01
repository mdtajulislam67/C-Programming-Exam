#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[10001];
    while (scanf("%s",s)!=EOF)
    {
    int cap=0;
    int sm=0;
    int dig=0;
    for(int i=0; s[i] != '\0';i++)
    {
    if (s[i]>='A' && s[i]<='Z')
    {
        cap++;
    }
    else if (s[i]>='a' && s[i]<='z')
    {
        sm++;
    }
    else if(s[i]>='0' && s[i]<='9')
    {
        dig++;
    }
    }
     printf("%d %d %d\n",cap,sm,dig);
    }
    return 0;
}