#include <stdio.h>
 
int main(void) {
	int a,reverse=0,m;
	scanf("%d",&a);
	while(a)
	{
		m=a%10;
		reverse=reverse*10+m;
		a=a/10;
	}
	printf("%d",reverse);
	// your code goes here
	return 0;
}
