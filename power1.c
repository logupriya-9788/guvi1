#include <stdio.h>

int main(void) {
	int sum=1,a,pow;
	scanf("%d%d",&a,&pow);
	for(int i=0;i<pow;i++)
	{
		sum=sum*a;
	}
	printf("%d",sum);
	// your code goes here
	return 0;
}
