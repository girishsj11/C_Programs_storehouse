#include <stdio.h>
int main()
{
	int p=10,*q,**r;
	q=&p;
	r=&q;
	printf("Value of P is : %d \n",p);
	printf("Value of Q is : %d \n",*q);
	printf("Value of R is : %d \n",**r);

	printf("\nAddress of P is :%d \n",&p);
	printf("Address of Q is: %d \n",&q);
	printf("Address of R is: %d \n",&r);

	printf("\nAddress of Q in different way : %d \n",q);
	printf("Address of R in different way : %d \n",r);

	return 0;

}
