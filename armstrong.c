#include<stdio.h>
#include<math.h>
int main()
{

    int n,count=0,rem,rem2,sum=0;
    scanf("%d",&n);
    int num=n;
    int num1=n;
    while(n>0)
    {
        rem=n%10;
        count++;
        n=n/10;
    }
    for(int i=1;i<=count;i++)
    {
        rem2=num1%10;
        sum=sum+pow(rem2,count);
        num1=num1/10;
    }
    if(num==sum)
    {

        printf("ARMSTRONG NUMBER");
    }
    else
    {

        printf("NOT A ARMSTRONG NUMBER");
    }
}
