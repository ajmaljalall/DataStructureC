#include <stdio.h>
#include <stdlib.h>

int a[20],size,front,rear;
void ENQUEUE(int item)
{
    if(rear==size-1)
        printf("queue is full");
    else if(rear==-1)
    {
        front=0;
        rear=0;
        a[rear]=item;
    }
    else{
        rear=rear+1;
        a[rear]=item;
    }
}
void DEQUEUE()
{
    if
        (front==-1)
        printf("queue is empty");
    else if(front==rear)
    {
        printf("deleted item is %d",a[front]);
        front=-1;
        rear=-1;
    }
    else{
        printf("the deleted element is %d",a[front]);
        front=front+1;
    }
}
void DISPLAY()
{   int i;
    if(front==-1)
        printf("queue is empty");
    else{
        printf("the entered element are ");
        for(i=front;i<=rear;i++)
            printf("%d",a[i]);
    }
}
void main()
{   int choice,n;
    front=-1;
    rear=-1;
    printf("enter the size of queue ");
    scanf("%d",&size);
    do{
        printf("\nenter the option ");
        printf("\n 1.ENQUEUE \t 2.DEQUEUE \t 3.DISPLAY \t 4.EXIT");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : printf("enter the element to be inserted ");
                     scanf("%d",&n);
                     ENQUEUE(n); break;
            case 2 : DEQUEUE(); break;
            case 3 : DISPLAY();
            case 4 : break;
            default : printf("enter the valid option");
        }

    }while(choice!=4);
}
