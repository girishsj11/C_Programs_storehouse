#include <stdio.h>
void main()
{
    int i=10;
    char ch='A';
    float f=3.10;
    char str[20];
    printf("\n %d %c %f",i,ch,f);
    //printf is just presenting the things which is specified in it onto a cmd window
    sprintf(str,"\n %d %c %f ",i,ch,f);
    //sprintf stands for “String print”. Instead of printing on console, it store output on char 'str' which are specified in sprintf
    printf("%s",str);
}
