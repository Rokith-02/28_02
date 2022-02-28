#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
        int roll;
        struct st*next;
}st;
void enqueue(st**front,st**rear)
{
        st*temp=(st*)malloc(sizeof(st));
        printf("enter the roll\n");
        scanf("%d",&temp->roll);
        if((*front==NULL)&&(*rear==NULL)){
        *front=temp;
        *rear=temp;
        temp->next=NULL;}
        else
        {
                temp->next=(*rear)->next;
                (*rear)->next=temp;
                (*rear)=temp;
        }
}
void display(st*ptr)
{
        if(ptr==NULL)
        {
                printf("queue is empty\n");
        }
        st*temp=ptr;
        while(temp!=0)
        {
                printf("%d ",temp->roll);
                temp=temp->next;
        }
        printf("\n");
}
void dequeue(st**front)
{
        st*temp=*front;
        *front=temp->next;
        free(temp);
        temp=NULL;
}
int main()
{
        st*front=NULL;
        st*rear=NULL;
        int op;
        while(1)
        {
                printf("1)enqueue 2)dequeue 3)display 4)exit\n");
                scanf(" %d",&op);
        switch(op)
        {
                case 1:enqueue(&front,&rear);break;
                case 2:dequeue(&front);break;
                case 3:display(front);break;
                case 4:return 0;
        }
        }
}
