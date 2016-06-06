#include <stdio.h>

int main(void) {
	char a;
	scanf("%c",&a);
	if((a>=65 && a<=90)||(a>=97 && a<=122))
	{
		printf("Alphabet");
	}
	else
	{
		printf("not an alphabet");
	}
	// your code goes here
	return 0;
}
