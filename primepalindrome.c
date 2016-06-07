#include <stdio.h>

int main(void) {
    int no,count=0,i,rev=0,mo;
    scanf("%d",&no);
    int a=no;
    if(no==1 || no==2)
    {
      count=0;
    }
    else
    {
    for(i=2;i<no-1;i++)
    {
        if(no%i==0)
        {
            count++;
        }
    }
    }
    printf("%d",count);
    while(a)
    {
        mo=a%10;
        rev=rev*10+mo;
        a=a/10;
    }
    printf("%d",rev);
    if(count==0 && rev==no)
    {
        printf("It is a prime palindrome");
    }
    else
    {
        printf("It is not a prime palindrome");
    }
    // your code goes here
    return 0;
}
