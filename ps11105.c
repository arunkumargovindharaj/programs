#include <stdio.h>
int main() 
{
	int a[100],b[100],n,i,j,temp;
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(a[i]==b[j])
           {
               printf("%d ",j+1);
           }
       }
   }
  	return 0;
}
