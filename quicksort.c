#include<stdio.h>
void swap(int A[50],int i,int j)
{
    int temp;
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}
int partition(int A[50],int low,int high)
{
    int i=low,j=high,pivot=low;  
    while(i<j)
      {
         while(A[i]<=A[pivot])
          {
            i++;
          }
        while(A[j]>A[pivot])
            {
                j--;
            }
        if(i<j)
            {
                swap(A,i,j);
            }            
      }          
    swap(A,pivot,j);
    return j;
}
void quicksort(int A[50],int low,int high)
    {
       int j;
       if(low<high)
         {
            j=partition(A,low,high);
            quicksort(A,low,j-1);
            quicksort(A,j+1,high);
         }
    }
void display(int A[50],int n)
{
 int i;
 printf("\nSorted array..\n");
 for(i=0;i<n;i++)
  printf("\n%d",A[i]);
}
int main()
{
    int A[50],n,i;
    printf("\nEnter the array size:");
    scanf("%d",&n);
    printf("\nEnter the elements:\n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
    quicksort(A,0,n-1); 
    display(A,n);   
}
