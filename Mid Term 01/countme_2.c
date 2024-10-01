#include<stdio.h>
int main()
{
    char s[100000];
    scanf("%s",s);
    int cnt=0;
    for(int i=0; s[i] !='\0';i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            cnt++;
        }
    }
      printf("%d\n",cnt);
    
    return 0;
}