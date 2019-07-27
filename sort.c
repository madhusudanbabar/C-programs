#include<stdio.h>
int sort(int *);
int gt(int *,int ,int );
int main()
{
	printf("Enter the size of array : ");
	int length;
	scanf("%d",&length);
	int arr[length];
	printf("Enter the elements now : \n");
	gt(arr,length,1);
	printf("Array is : ");
	gt(arr,length,2);
	sort(arr);
}


int gt(int *arr,int length,int operation)
{
	for(int i=0;i<length;i++)
	{
		if(operation==1)
		{
			scanf("%d",&arr[i]);
		}
		else
		{
			printf("%d\t",arr[i]);
		}
	}
}
