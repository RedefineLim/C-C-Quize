#include <stdio.h>

int Determ_year(int n)
{
    if(((n%4 == 0)&&(n%100 != 0))||(n%400 == 0))
        return 1;
    else    
        return 0;
}

int main()
{
    int year = 0;
    scanf("%d", &year);
    int ret = Determ_year(year);
    (ret==1)?(printf("是闰年\n")):(printf("不是闰年\n"));

    return 0;   
}