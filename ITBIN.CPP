//binary search using iteration
#include<stdio.h>
#include<conio.h>
int ar[20];
int bsearch(int ,int);//prototype declaration
void main()
{
	int flag,n,i,key;
	clrscr();
	printf("Enter no of element :=");
	scanf("%d",&n);
	//taking input from user
	//input must be in sorted order
	printf("\nEnter elements in sorted order\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter Ar[%d]:=",i);
		scanf("%d",&ar[i]);
	}
	printf("\nEnter the key u want to search:=");
	scanf("%d",&key);
	flag=bsearch(n,key);
	if(flag==0)
	{
		printf("\nKey not found!!");
	}
	else
	{
		printf("\nKey %d found at [%d] position",key,flag+1);
	}
	getch();
}

//function defination start

int bsearch(int n,int key)
{
	int mid,low=0,high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(ar[mid]==key)
		{
			return mid;//if element found at mid position return mid
		}
		else if(key<ar[mid])
		{
			high=mid-1;//if element is less then mid then upper is shifted to (mid-1)
		}
		else
		{
			low=mid+1;//if element is less then mid then upper is shifted to (mid-1)
		}
	}
	return 0;
}