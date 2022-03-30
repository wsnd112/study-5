#include <stdio.h>
int  power(int x, int n)
{
	int   t=1;
	int i;
	for(i=0;i<n;i++)
	{      t=t*x;
	}
	return t;
}
int main()
{
	int a,b,s;  
	scanf("%d%d",&a,&b); 
	printf("%d\n",power(a,b));
	printf("%d\n",power(a,3));	
	printf("%d\n",power(2,a+b));
	printf("%d\n",power(power(a,3),b+2));		
	return 0; 
}