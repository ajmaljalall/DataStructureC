#include<stdio.h>
int p[100];
void polyeval(int q[],int n)
{
	printf("Enter coefficients: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&q[i]);
}

void addpoly(int p1[],int n1,int p2[],int n2)
{
	int i=0,j=0,k=0;
	while(i<n1&&j<n2)
	{
		p[k]=p1[i]+p2[j];
		k++,j++,i++;
	}
	while(i<n1)
	{
		p[k]=p1[i];
		k++,i++;
	}
	while(j<n2)
	{
		p[k]=p2[j];
		k++,j++;
	}
}

void display(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		printf("%dx^%d",a[i],i+1);
		if(i!=n-1)
			printf("+");
	}
}

int max(int n1, int n2)
{
	if(n1>n2)
		return n1;
	return n2;
}

void main() 
{ 
	int n1,n2,p1[100],p2[100];
	printf("Enter size of first polynomial:"); 
	scanf("%d",&n1); 
	polyeval(p1,n1); 
	printf("Enter size of second polynomial:"); 
	scanf("%d",&n2); 
	polyeval(p2,n2); 
	addpoly(p1,n1,p2,n2); 
	printf("Resultant polynomial:\n"); 
	display(max(n1,n2),p); 
}
