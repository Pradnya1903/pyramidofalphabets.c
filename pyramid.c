#include<stdio.h>
int main()
{
    int n,num;
    num=1;
    printf("enter number upto which pattern should be printed\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",num+64);
            num++;
        }
        printf("\n");
    }
    return 0;
}
