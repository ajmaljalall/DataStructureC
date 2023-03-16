#include<stdio.h>
void push();
void pop();
void display();

int a[100], i,  size, rear=-1, front=-1, item;
void main()
{
	int choice, ch;
	printf("Enter the size of queue:");
	scanf("%d",&size);
	 do
	  {
	  	printf(" CIRCULAR QUEUE OPREATIONS\n 1. insert\n 2.delete\n 3. display\n");
	  	printf("Enter ur choice:");
	  	scanf("%d",&choice);
	  	switch(choice)
	  	{
	  	 case 1:   push();
	  	 	break;
		  case 2:   pop();
	  	 	break;
	  	 case 3:   display();
	  		break;
	  	 default:
			printf("enter a  valid choice:");
			break;
	  	}
	  	printf("\nDo you want to continue(Y=1/N=0):");
	  	scanf("%d",&ch);
	    }while(ch==1);
	    printf("\t THANK U(-_-)\n");

  }

  void push()
  {

	if (  (rear+1)%size==front)
	{
		printf("queue overflow");
	}
	else if( front==-1)
	{
		front=0;
		rear=0;
		printf("enter the item to insert:");
		 scanf("%d", &item);
		a[rear]=item;
	}
	else
	{
		rear=(rear+1)%size;
		printf("enter the item to insert:");
		 scanf("%d", &item);
		a[rear]=item;
	}

}
void pop()
{
	if  (front==-1)
			printf("queue underflow");
	else if(front==rear)
	{
		printf("%d poped from queue",a[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("%d poped from queue",a[front]);
		front=(front+1)%size;
	}

}



void display()
  {
  	if (front==-1)
  	{
  		printf("QUEUE underflow");
  	}
  	else if(front<=rear)
  	{

  	printf("the QUEUE is:\n");
  	for(i=front; i<=rear; i++)
		{
			printf(" %d\n ", a[i]);
		}
  	}
  	else
  	{
  	printf("the QUEUE is:\n");
  	for(i=front; i<size; i++)
		{
			printf(" %d\n ", a[i]);
		}
  	for(i=0; i<=rear; i++)
		{
			printf(" %d\n ", a[i]);
		}
	}
 }

