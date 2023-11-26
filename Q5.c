#include <stdio.h>
#include <stdlib.h>

int Sort_arr(const void* e1, const void* e2)
{
    return (*(int*)e1 - *(int*)e2);
}

int main()
{
    int arr[3] = {0};
    int i = 0;
    for(i=0;i<3;i++)
        scanf("%d", &arr[i]);
    qsort(arr,3,4,Sort_arr);
    for(i=0;i<3;i++)
        printf("%d ",arr[i]);

    return 0;
}