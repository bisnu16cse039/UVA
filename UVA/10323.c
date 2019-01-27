#include<stdio.h>

int main()
{
    int n,i,j,x;
    long long s;

    while(scanf("%d",&n)==1)
    {
        if(n<0){
            if(n%2)
                printf("Overflow!\n");
            else
                printf("Underflow!\n");
        }
        else if(n<8)
            printf("Underflow!\n");
        else if(n>13)
            printf("Overflow!\n");

        else
        {
            s=1;
            for(i=2; i<=n; i++)
                s*=i;
            printf("%lld\n",s);

        }
    }
    return 0;
}
