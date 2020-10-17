#include <stdio.h>
#include <string.h>
int main()
{
  char a[]="";
  int length;

  printf("Enter a string to calculate its length\n");
  gets(a);
  //using gets function , we can even count the whitespaces & we can give only one whitespace as a input string to find its string.
  length = strlen(a);

  printf("Length of the string = %d\n", length);

  return 0;
}

