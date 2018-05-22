#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

int main()
{
    FILE *fp;
    char a[MAXSIZE];
    int b,c[MAXSIZE],len=0,i;
    //文件读取

    if((fp = fopen("z:\\number.txt","r"))==NULL)
    {
        printf("File doesn't exist.");
        exit(1);
    }

    fscanf(fp,"%d",&b);
    while(!feof(fp)){
        fscanf(fp,"%d",&b);
        c[len++]=b;
}
    fclose(fp);

        if((fp = fopen("z:\\write.txt","w"))==NULL)
    {
        printf("File doesn't exist.");
        exit(1);
    }
    for(i=0;i<len;i++){
        fprintf(fp,"%d\t",c[i]);
    }
      fclose(fp);
      printf("success!");
    return 0;
}
