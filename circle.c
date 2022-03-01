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
                *ptr=temp;
                temp->next=*ptr;
        }
        else
        {
                st*last=*ptr;
                while(last->next!=*ptr)
                last=last->next;

                temp->next=last->next;
                last->next=temp;
        }
}
void print(st*ptr)
{
        st*temp=ptr;
        do
        {
                printf("%d ",temp->roll);
                temp=temp->next;
        }while(temp!=ptr);
        printf("\n");
}
void delete(st**ptr)
{
	st*temp=*ptr;
        st*prv;
        while(temp->next!=*ptr){
        prv=temp;
        temp=temp->next;
        }
        prv->next=temp->next;
        free(temp);
        temp=NULL;
}
int main()
{
        st*hptr=0;
        char op;
        do
        {
                add_end(&hptr);
                printf("enter y to add another node\n");
                scanf(" %c",&op);
        }while((op=='y')||(op=='Y'));
        print(hptr);
        delete(&hptr);
        print(hptr);
}
