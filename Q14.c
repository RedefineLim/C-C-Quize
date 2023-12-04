#include <stdio.h>

int main() 
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int max = m>n?m:n;
    int arr[max][max];
    int j = 0;
    int i = 0;
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
            scanf("%d", &arr[i][j]);
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            int tmp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tmp;
        }
    }
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}