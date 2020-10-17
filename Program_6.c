#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
void mystrcmp(char str1[],char str2[]);
int main()
{
	char a[10],b[10];
    	printf("Welcome to string comparison Program \n ");
	printf("Enter the 1st string : \t");
	scanf("%s",a);
	printf("Enter the 2nd string : \t");
	scanf("%s",b);
	mystrcmp(a,b);
    return 0;
}

void mystrcmp(char str1[],char str2[])
{

	int i=0,count1=0,count2=0,j=0;

	while(str1[i]!='\0')
	{
		count1++;
		i++;
	}
	while(str2[j]!='\0')
	{
		count2++;
		j++;
	}

	if(count1!=count2)
	{
		printf("Both strings are unequal in size & letters too \n");
	}
	else
	{
		i=j=0;
		while(str1[i]!='\0' && str2[j]!='\0')
		{
			if(str1[i]!=str2[j])
            {
			    printf("Both strings are equal in size & but unequal in letters \n");
			    exit(1);
            }
			else
			    {
			       i++;
			       j++;
			    }
		}
		printf("Both strings are equal in size & letters too \n");
	}
}
