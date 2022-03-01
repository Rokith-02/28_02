#include<stdio.h>
int main()
{
        int a[5]={5,4,3,2,1};
        int i,j;
        for(i=0;i<5;i++)//
        {
                for(j=0;j<5-i-1;j++)//it will cheak with adjacent elements
                {
                        if(a[j]>a[j+1])//inside this for swaping
                        {
                        /*      int temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;*/
                                //a[j]=a[j]^a[j+1]^(a[j+1]=a[j]);
                        }
                }
        }
        for(i=0;i<5;i++)
        printf("%d ",a[i]);
}
