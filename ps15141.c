#include <stdio.h>
#include<string.h>
int main()
{
 int i,j,k,l,m,n,c=0,c1=0;
    char str[100][100];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    for(i=0;i<n;i++)
    {
        l=strlen(str[i]);
        for(j=i+1;j<n;j++)
        {
        m=strlen(str[j]);
        if(l==m)
        {
            for(k=0;k<m;k++)
            {
                if(str[i][k]==str[j][k])
                {
                    c++;
                }
            }
            if(c==m)
            {
                c1=1;
                break;
            }
            else
            {
                c1=0;
            }
        }
           
        }
    }
    if(c1==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
