#include<stdio.h>
void heapify(int A[],int n,int i)
    {
        int temp,largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<n && A[left]>A[largest])
            largest=left;
        if(right<n && A[right]>A[largest])
            largest=right;
        if(largest!=i)
            {
                temp=A[i];
                A[i]=A[largest];
                A[largest]=temp;
                heapify(A,n,largest);
            }
    }
void buildmaxheap(int A[],int n)
    {
        int i;
        for(i=(n/2)-1;i>=0;i--)
            {
                heapify(A,n,i);
            }
    }
void heapsort(int A[],int n) 
    {
        int i,temp;
        buildmaxheap(A,n);
        for(i=n-1;i>=0;i--)
            {
                temp=A[0];
                A[0]=A[i];
                A[i]=temp;
                heapify(A,i,0);
            }
    }
void print_array(int A[],int n)
    {
        int i;
        for(i=0;i<n;i++)
            printf("%d\n",A[i]);
    }    
void main()
    {
        int i,A[50],n;
        printf("\nEnter the array size:");
        scanf("%d",&n);
        printf("\nEnter the array elements:\n");
        for(i=0;i<n;i++)
            {
                scanf("%d",&A[i]);
            }
        printf("\nArray before sorting:\n");
        print_array(A,n);
        heapsort(A,n);
        printf("\nArray after heapsort:\n");
        print_array(A,n);
    }
