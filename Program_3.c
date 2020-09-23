/*
shows the ternary operations on function call & input variable 
*/

#include <stdio.h>
int f1(int n);
int f2(void);

int main (void)
{

    int t;
    printf("enter a number : \n");
    scanf("%d", &t);

    t? f1(t)+f2() : printf("Zero has been entered\n");
    return 0;
}
int f1(int n)
{
    printf("%d:",n);
    return 0;
}
int f2(void)
{
    printf("entered\n");
    return 0;
}
