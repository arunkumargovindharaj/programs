#include <stdio.h>

int main() 
{
	char a[2],b[2],c[2];
	gets(a);
	gets(b);
	gets(c);
	if((a[0]=b[0]=c[0])||(a[1]=b[1]=b[1]))
	{
		printf("yes");
	}
	else if((a[0]=a[1])&&(b[0]=b[1])&&(c[0]=c[1]))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
