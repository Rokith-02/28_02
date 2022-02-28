#include<stdio.h>
int main()
{
        int a[7];
        int n=sizeof a/sizeof a[0];
        int j,temp,i,k,key;
        printf("enter the element\n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=1;i<n;i++)
        {
                key=a[i];
                j=i-1;
                while(j>=0&&a[j]>key)
                {
                        a[j+1]=a[j];
                        j=j-1;
                }
                a[j+1]=key;
        }
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
}
