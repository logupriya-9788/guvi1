#include <stdio.h>
 
int main(void) {
	int a,count=0;
	scanf("%d",&a);
	while(a)
	{
		count++;
		a=a/10;
	}
	printf("%d",count);
	// your code goes here
	return 0;
}
