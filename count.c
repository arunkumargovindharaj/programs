#include<stdio.h>
int main()
{
	int c=0,num;
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		c++;
	}
	printf("%d",c);
return 0;
}
