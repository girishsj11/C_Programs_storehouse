#include <stdio.h>

//Program to reverse a input string from user without using any builtin functions of sting module

int main()
{
  int size=0,count=0;
  
  //To just to have a approximate size value for an char of array(string) to be declare below
  printf("Enter the number of characters which you wanted to present on the string : \n");
  scanf("%d",size);
  
  //declaring & initializing the bunch of characters to the input char array s
  char s[size];
  printf("Enter your favourite string here to give you the reverse of it : \n");
  scanf("%s",s);
  
  while(s[count] != '\0')
  {
    count++;
  }
  
  if(count != size)
  {
    printf("The program is identified the that user entered character length is less than the size which he declared in begining ");
  }
  for(int i = count-1; i>=0 ; i--)
    {
      printf("%c",s[i]);
    }
  
  return 0;
}
