#include <stdio.h>
#include <stdlib.h>

int a[100],size,top;
void push(int item)
{
    if(top==size-1)
        printf("stack is full");
    else{
        top=top+1;
        a[top]=item;
    }
}
void pop()
{
    if(top==-1)
        printf("stack is empty");
    else{
        printf("the popped element is %d",a[top]);
        top=top-1;
    }
}
void display()
{   int i;
    if(top==-1)
        printf("stack is empty");
    else{
        printf("the elements are\n");
        for(i=0;i<=top;i++)
            printf("\n%d",a[i]);
    }
}
void main()
{   int choice,n;
    top=-1;
    printf("enter the size of stack");
    scanf("%d",&size);
    do{
        printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");

        printf("enter the choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : printf("enter the element to be pushed");
                     scanf("%d",&n);
                     push(n);  break;
            case 2 : pop();   break;
            case 3 : display(); break;
            case 4 : break;
            default : printf("enter a valid option");
        }
    }while(choice!=4);
}
