#include <stdio.h>
#include <stdlib.h>

int visited[10]={0};
int num[10];

//深度优先算法
int dfs(int index,int length)
{
    int i,j;
    if(index==length)
    {
        for(i=0;i<length;i++)
        {
            printf("%d",num[i]);
        }
        printf("\n");
        return 0;
    }

    else{
    for(j=0;j<length;j++)
    {
        if(visited[j]==0)
        {
            visited[j]=1;
            num[index]=j+1;
            dfs(index+1,length);
            visited[j]=0;
        }}}
}

int main()
{
    //输出3的全排列
    dfs(0,3);
    return 0;
}
