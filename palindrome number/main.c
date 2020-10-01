#include<stdio.h>
#include<string.h>
void main()
{
    char S[100];
    int i,l,flag=0;
	scanf("%s",S);
	 l=strlen(S);
     for(i=0;i<l;i++)
	{
		if(S[i]>=65&&S[i]<=90)
        S[i]+=32;
	}
    for(i=0;i<l/2;i++)
    {
        if(S[i]!=S[l-1-i])
        {
             flag=1;
             printf("NO");
             break;
        }
    }
    if(flag==0)
    printf("YES");   
}
