#include<stdio.h>
int main()
{
        int n=5,i,j,s,u=9;
        for(i=0;i<5;i++)
        {
                for(j=0;j<5;j++)
                {
                        if(j<i)
                        printf("  ");
                        else
                        {
                        //printf("* ");
                        //printf("%c ",65+i);
                        //printf("%c ",65+j);
        //              printf("%d ",u);
                        }
                }
        //      u=u-2;
                printf("\n");
        }
}
