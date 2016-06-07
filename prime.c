    #include <stdio.h>
     
    int main(void) {
        int no,count=0,i,rev=0,mo;
        scanf("%d",&no);
        int a=no;
        for(i=2;i<no-1;i++)
        {
            if(no%i==0)
            {
                count++;
            }
        }
     
        if(count==0)
        {
            printf("It is a prime");
        }
        else
        {
            printf("It is not a prime");
        }
        // your code goes here
        return 0;
    }
