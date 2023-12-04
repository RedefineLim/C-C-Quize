#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int i = 0;
    double sum = 0.0;
    for(i=0;i<10;++i)
    {
        scanf("%d", &arr[i]);
        sum += (double)arr[i];
    }
    printf("%f\n", sum/10);

    return 0;
}