#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	if((fp=fopen("abcd.txt","w+"))==NULL)
	{
		printf("can't able to open a file");
	}
	else
	{
		printf("\nAble to open & Able to write also");
		fputs("This file handling program",fp);
	}
}
