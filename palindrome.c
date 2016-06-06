#include <stdio.h>
 
int main(void) {
	int a,reverse=0,m;
	scanf("%d",&a);
	int n=a;
	while(a)
	{
		m=a%10;
		reverse=reverse*10+m;
		a=a/10;
	}
	if(reverse==n)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	// your code goes here
	return 0;
}
