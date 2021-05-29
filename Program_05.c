#include <stdio.h>
int sqrnum(int t);
int cubenum(int x);

int main(void)
{
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    a ? sqrnum(a),cubenum(a): printf("Entered value is Zero, so no need of squaring here \n");
    return 0;
}
int sqrnum(int t)
{
    printf("square of a number is: %d \n",t*t);
    return t*t;
}
int cubenum(int x)
{
    printf("cube of a number is: %d \n",x*x*x);
    return x*x*x;
}
