
#include <stdio.h>
#include <stdlib.h>


int main()
{

FILE *fp1;
fp1=fopen("1234.txt","a");
fputc(' ',fp1);
int length=0,new_line=0,Big_Alpha=0,Small_Alpha=0,Numerics=0,space=0,Special_char=0,Only_char=0;
char ch;
length=ftell(fp1);
printf("The total length of our file is :%d \n",length);
Only_char=length;
//printf("The total length of our file is :%d \n",Only_char);
printf("The contents in our file is:\n \n");

fp1=fopen("1234.txt","r");

for(int i=0;i<=length;i++)
{
  ch=fgetc(fp1);
  printf("%c",ch);


  if(ch==10)
  {
     new_line++;
     Only_char--;
  }
  else
  {
      if(ch==32)
      {
      space++;
      Only_char--;
      }
      for(int p=65;p<=90;p++)
      {
          if(ch==p)
          {
            Big_Alpha++;
          }
      }
      for(int q=97;q<=122;q++)
      {
          if(ch==q)
          {
            Small_Alpha++;
          }
      }
      for(int r=48;r<=57;r++)
      {
          if(ch==r)
          {
            Numerics++;
          }
      }
       for(int s=33;s<=47;s++)
      {
          if(ch==s)
          {
           Special_char++;
          }
      }
          for(int t=58;t<=64;t++)
          {
              if(ch==t)
              {
                  Special_char++;
              }
          }

  }
}
printf("\n \n");
printf("The total only characters in our file is :%d \n",Only_char);
printf("The total number of spaces in our file is :%d \n",space);
printf("The total number of new lines in our file is :%d \n",new_line);
printf("The total number of only BIG_Alphabetics in our file is :%d \n",Big_Alpha);
printf("The total number of only small_Alphabetics in our file is :%d \n",Small_Alpha);
printf("The total number of only Numerics in our file is :%d \n",Numerics);
printf("The total only Special_characters in our file is :%d \n",Special_char);
fclose(fp1);
return 0;
}
