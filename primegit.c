#include<stdio.h>
int main()
{

    int n,i,flag=1;
    scanf("%d",&n);
    if(n<2)
    {

        flag=0;
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {

            if(n%i==0)
            {
                flag=0;
            }
            else
            {
              flag=1;
            }
        }
    }
    if(flag==1)
    {

        printf("IT IS PRIME NUMBER");
    }
    else
    {

        printf("IT IS NOT A PRIME");
    }


}
