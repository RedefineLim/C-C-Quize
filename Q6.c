#include <stdio.h>
#include <math.h>

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

int main()
{
    double sum = 0.0;
    int i = 0;
    for(i=1;i<=100;i++)
    {
        sum += pow(-1,i+1)*(1.0/i);
    }
    printf("%f\n", sum);

    return 0;
}