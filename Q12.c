#include <stdio.h>
#include <stdlib.h>

int sort_arr(const void* e1, const void* e2)
{
    return (*(int*)e1 - *(int*)e2);
}

int main()
{
    int w = 0;
    int n = 0;
    scanf("%d %d" ,&w, &n);
    int* arr = (int*)calloc(n,sizeof(int));
    int i =0;
    for(i=0;i<n;++i)
        scanf("%d", &arr[i]);
        
    qsort(arr ,n ,sizeof(int), sort_arr);

    return 0;
}