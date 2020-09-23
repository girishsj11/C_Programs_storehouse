/*

Checking the behaviour of global variable & local variables with same name .

*/

#include <stdio.h>
int count; //global variable declaration
void funct2()
{
  for(int count=0;count<10;count++)
  {
    printf(" function 2 'count' is %d", count); //displaying the function scope variable
    printf("\n");
  }
}
void funct1()
{
    printf(" function 1 'count' is %d \n",count);  //getting global variable initial value 0
    funct2();
}


void main()
{
    int count=0x10; //local variable declaration
    printf("main 'count' is %d \n",count);
    funct1();
}
