#include <stdio.h>
 
int main(void) {
	int a;
	scanf("%d",&a);
	if(a>0)
	{
		printf("Possitive");
	}
	else if(a==0)
	{
		printf("Zero");
	}
	else 
	{
		printf("Negative");
	}
	return 0;
}
