#include <stdio.h>
void f(void);
int main()
{
    int i;
    for(i=0; i<10; i++)
    {
        //looking on the function variable
        f();
        //so when ever 'f' is called j will initialize with 5 & exposed on terminal
    }
    return 0;
}
void f(void)
{
    int j=5;
    printf("%d \n",j);
    j++;  //J will gets increment but never exposed in the program.

}
