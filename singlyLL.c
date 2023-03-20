#include <stdio.h>
#include <stdlib.h>
int x,key;
struct node
{
int data;
struct node*link;
};
struct node *head,*new,*temp,*prev;
void Insert_beg()
{
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter the value to insert");
        scanf("%d",&x);
        new->data=x;

        new->link=head;
        head=new;


}

void Insert_end()
{
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter the value to insert");
        scanf("%d",&x);
        new->data=x;
        new->link=NULL;
        if(head==NULL)
        {
        head=new;
        }
        else
        {
         temp=head;
         while(temp->link!=NULL)
           {
             temp=temp->link;
            }
            temp->link=new;
         }
}

void Insert_spe_pos()
{
    printf("enter the key");
    scanf("%d",&key);

    temp=head;
    while((temp!=NULL)&&(temp->data!=key))
        {
         temp=temp->link;
         }

    if(temp==NULL)
    {
      printf("elemnt not found");
      }
     else
     {
       new=(struct node*)malloc(sizeof(struct node));
       printf("enter the value to insert");
       scanf("%d",&x);
       new->data=x;
       new->link=temp->link;
       temp->link=new;
     }
  }

    void Display()
    {
    if(head==NULL)
    {
    printf("list empty");
    }
    else
    {
      temp=head;
      while(temp!=NULL)
      {
      printf("%d\n",temp->data);
      temp=temp->link;
      }
    }
    }

   void Del_front()
    {
       if(head==NULL)
       {
       printf("list is empty");
       }
       else if(head->link==NULL)
        {
       temp=head;
       head=NULL;
        free(temp);
        }
      else
      {
       temp=head;
       head=temp->link;
       free(temp);
      }
    }

    void Del_end()
    {

       if(head==NULL)
       {
       printf("list is empty");
       }
       else if(head->link==NULL)
       {
       temp=head;
       head=NULL;
       free(temp);
       }
       else
       {
       temp=head;
       while(temp->link!=NULL)
       {
       prev=temp;
        temp=temp->link;
        }
        prev->link=NULL;
        }
    }
  void Del_spec_pos()
  {
  printf("enter the element to delete");
       scanf("%d",&key);
   if(head==NULL)
       {
       printf("list is empty");
       }
   else if(head->data==key)
   {
   temp=head;
   head=temp->link;
   free(temp);
   }
   else
   {
   temp=head;
    while((temp!=NULL)&&(temp->data!=key))
    {prev=temp;
     temp=temp->link;
    }
    if(temp==NULL)
    {
      printf("ELEMENT NOT FOUND");
      }
      else
      {
      prev->link=temp->link;
      free(temp);
      }
      }

  }

void main()
{
  int ch,choice;


  do{
       printf("enter the choice\n");
       printf("1.Insert_beg\n2.Insert_end\n3.Insert_spe_pos\n4.Del_front\n5.Del_end\n6.Del_spec_pos\n7.Display");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1 :Insert_beg();
           break;
  case 2 :Insert_end();
           break;
  case 3:Insert_spe_pos();
           break;
  case 4:Del_front();
        break;
  case 5:Del_end();
        break;
 case 6:Del_spec_pos();

        break;
  case 7:Display();
           break;

  default :printf("INVALID");
  }
  printf("do u want to continue 1 for YES and 0 for NO");
  scanf("%d",&ch);
  }while(ch==1);
}
