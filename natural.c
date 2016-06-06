#include <stdio.h>

int main(void) {
	int i,n,a,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
	    sum+=a;
	}
	printf("%d",sum);
	// your code goes here
	return 0;
}
