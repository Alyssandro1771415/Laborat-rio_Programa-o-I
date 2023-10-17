#include<stdio.h>
unsigned long long Fact(int x)
{
    if(x==0) return 1;
    unsigned long long n=1;
    while(x>0)
    {
        n = n*x;
        x--;
    }
    return n;
}
int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n) != EOF)
    {
        unsigned long long x;
        x = Fact(m)+Fact(n);
        printf("%llu\n",x);
    }
    return 0;
}