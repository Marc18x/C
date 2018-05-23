#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//使用next_permutation（）函数实现0-4的全排列
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        a[i]=i+1;
    }

    do
    {
        for(int i=0;i<4;i++)
        {
            printf("%d",a[i]);
        }
        printf("\n");
    }while(next_permutation(a,a+4));
    return 0;
}
