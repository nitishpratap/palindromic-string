#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    printf("Enter the string\n");
    gets(string);
    int i,count,temp=0;
    count=strlen(string)-1;
    //printf("%d\n",count);

    for(i=0;i<strlen(string);i++)
    {
        if(string[i]==string[count])
        {
            temp=1;
        }
        else
        {
            temp=2;}
        count--;
    }
    //printf("%d",temp);
    if(temp==1)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}
