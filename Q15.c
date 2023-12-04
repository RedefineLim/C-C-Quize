#include <stdio.h>

#define VALUE_ONE 1,2,3,4,5,6,7,8,9,10
#define VALUE_TWO 10,9,8,7,6,5,4,3,2,1

void array_switch(int* arr1, int* arr2, const int sz)
{
    int i = 0;
    for(i=0;i<sz;++i)
    {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
}

int main()
{
    int arr1[10] = {VALUE_ONE};
    int arr2[10] = {VALUE_TWO};
    int sz = sizeof(arr1)/sizeof(arr1[0]);

    //scanf
    //.......
    array_switch(arr1, arr2,sz);

    return 0;
}