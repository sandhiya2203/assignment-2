#include <stdio.h>

int main()
{
   int r,c,i,j;
    printf("number of row:");
    scanf("%d",&r);
    printf("number of column:");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int s=0,count,count1=1;
    for(int v=0;v<r;v++)
    {
    for(s=0;s<c;s++)
    
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[v][s]==a[i][j])
                {
                    count = a[i][j];
                    count1=count1+1;
                }
            }
        }
    }
    }
    
    printf("%d\n%d",count,count1);
    return 0;
}
