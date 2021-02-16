#include <stdio.h>

//Program to reverse a input string from user without using any builtin functions of sting module

int main()
{
  int count=0;
 
  //declaring & initializing the bunch of characters to the input char array s
  char s[20];
  printf("Enter your favourite string here to give you the reverse of it : \n");
  scanf("%s",s);
  
  while(s[count] != '\0')
  {
    count++;
  }
  
  for(int i = count-1; i>=0 ; i--)
    {
      printf("%c",s[i]);
    }
  
  return 0;
}
