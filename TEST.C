#include <stdio.h>
long int fact(int n)
{
    if (n >= 1)
	return n*fact(n-1);
    else
	return 1;
}

int main()
{
    int n,t,i=0;
    long int a[100];
    scanf("%d",&t);
    while(t--!=0)
    {
	scanf("%d",&n);
	a[i]=fact(n);
	i++;
    }
    for(i=0;i<t;i++)
    {
	printf("\n%ld",a[i]);
    }
    return 0;
}