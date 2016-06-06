#include <stdio.h>

int main(void) {
	char a,count=0;
	scanf("%c",&a);
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
	{
		count++;
	}
	printf("%d",count);
	// your code goes here
	return 0;
}


