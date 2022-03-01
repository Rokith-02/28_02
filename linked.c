#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
        int roll;
        struct st*next;
}st;
void add_end(st**ptr)
{
        st*temp=(st*)malloc(sizeof(st));
        scanf("%d",&temp->roll);
        if(*ptr==NULL)
        {
                temp->next=*ptr;
                *ptr=temp;
        }
        else
        {
                st*last=*ptr;
                while(last->next!=0)
                last=last->next;

                temp->next=last->next;
                last->next=temp;
        }
}
void display(st*ptr)
{
        while(ptr!=0)
        {
        printf("%d ",ptr->roll);
        ptr=ptr->next;
        }
}
void delete(st**ptr)
{
        int ele;
        printf("enter the roll number to delete\n");
	scanf("%d",&ele);
        st*temp=*ptr;
        st*prv;
        while(temp!=0)
        {
                if(ele==temp->roll)
                {
                        if(temp==*ptr)
                        *ptr=temp->next;
                        else
                        prv->next=temp->next;
                        free(temp);
                        temp=NULL;
                }
                else
                {
                        prv=temp;
                        temp=temp->next;
                }
        }
}
void sorting(st**ptr)
{
        /*st*temp=ptr;
        st*prv;
        while(temp!=0)
        {
                prv=temp->next;
                while(prv->next!=0)
                {
                        if(temp->roll > prv->roll)
                        {
                        int tem=temp->roll;
                        temp->roll=prv->roll;
                        prv->roll=tem;
                        }
			}
                temp=temp->next;
        }*/
        int i,j,temp;
        st*temp1;
        st*temp2;
        for(temp1=*ptr;temp1!=NULL;temp1=temp1->next)
        {
                for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
                {
                        if(temp1->roll >temp2->roll)
                        {
                        temp=temp1->roll;
                        temp1->roll=temp2->roll;
                        temp2->roll=temp;
                        }
                }
        }

}
int main()
{
        st*hptr=0;
        char op;
        do
        {
                add_end(&hptr);
                printf("enter (y) to add another node\n");
                scanf(" %c",&op);
        }while((op=='y')||(op=='Y'));
        display(hptr);
        printf("\n");
        delete(&hptr);
        display(hptr);
        printf("\n");
        sorting(&hptr);
        display(hptr);
        printf("\n");
}
