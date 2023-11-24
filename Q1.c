#include <stdio.h>

//剑形图案

int main()
{
    int n = 0;
    while(scanf("%d", &n) == 1)
    {
        //打印图案
        //上n行
        int i = 0;
        for(i=0;i<n;i++)
        {
            //空格
            int j = 0;
            for(j=0;j<n-i;j++)
            {
                printf("  ");
            }
            //星号
            for(j=0;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        //下n+1行
        for(i=0;i<n+1;i++)
        {
            //空格
            int j = 0;
            for(j=0;j<i;j++)
            {
                printf("  ");
            }
            //星号
            for(j=0;j<n+1-i;j++)
            {
                printf("*");
            }
            printf("\n");
        } 
    }

    return 0;
}