#include<stdio.h>
int main()
{
    int a,i,s,m,y,x;
    scanf("%d",&a);
    s=a;
    y=a;
    for(i=1;i<a;i++)
    {
        x=i;
        if(s%i==0)
        {
            m=y/x;
        if(m%2!=0)
            {
                printf("%d",x);
                break;
            }
        }
    }
    return 0; 
}
