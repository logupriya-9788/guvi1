#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i=a;i<b;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
	// your code goes here
	return 0;
}
