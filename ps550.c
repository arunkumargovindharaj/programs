#include <stdio.h>

int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("yes");
    }
else
printf("no");
    return 0;
}
