#include <stdio.h>
#include <string.h>
void converge(char *trg,char *src);

int main(void)
{
    char target[]="xxxxxxxxxxxxxxxxxxxxxxxxxxx";
    converge(target,"This is our Testing program");
    printf("The final string is: %s \n",target);
    return 0;
}
void converge(char *trg,char *src)
{
    int i,j;
    printf("%s \n",trg);
    for (i=0,j=strlen(src);i<=j;i++,j--)
    {
        trg[i]=src[i];
        trg[j]=src[j];
        printf("%s\n",trg);
    }
}
