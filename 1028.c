#include <stdio.h>

int CollectableCards(int x, int y){

    for(;y%x != 0;)
    {
        int t = x;
        x = y%x;
        y = t;
    }
    return x;
}

int main()
{
    int i,n, x, y;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d",&x,&y);

        if(x > y)
        {
            int t = x;
            x = y;
            y = t;
        }

            printf("%d\n", CollectableCards(x,y));
    }
    return 0;
}