#include <stdio.h>
#include <stdlib.h>

int Sort_arr(const void* e1, const void* e2)
{
    return (*(int*)e2 - *(int*)e1);
}

int main()
{
    int arr[10] = {0};
    int i = 0;
    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr,10,4,Sort_arr);
    printf("%d\n", arr[0]);

    return 0;
}