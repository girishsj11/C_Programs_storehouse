#include<stdio.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("Enter any string : ");
    gets(str);

    for(i=0;str[i];i++)
    {
        if(str[i] != "\0")
        {
            count++;
        }
    }

    printf("\nTotal characters or length of a input string is  : %d",count);
    return 0;
}

