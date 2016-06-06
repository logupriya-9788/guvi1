#include <stdio.h>

int main(void) {
	
int N,i,sum=0;
for(i=1;i<=N;i++)
{
 sum+=i;	
}
printf("%d",sum)
	return 0;
}
