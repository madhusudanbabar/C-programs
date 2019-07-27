#include<stdio.h>
int sort(int *,int );
int gt(int *,int ,int );
int main()
{
	printf("Enter the size of array : ");
	int length;
	scanf("%d",&length);
	int arr[length];
	printf("Enter the elements now : \n");
	gt(arr,length,1);
	printf("Array is :\t");
	gt(arr,length,2);
	sort(arr,length);
	printf("Array after sorting :\t");
	gt(arr,length,2);
}

int sort(int *arr,int length)
{
	for(int i=0;i<length;i++)
	{
		for(int j=i;j<length;j++)
		{
			if (arr[i]>arr[j])
			{
				arr[i]=arr[j]+arr[i];
				arr[j]=arr[i]-arr[j];
				arr[i]=arr[i]-arr[j];
			}
		}
	}
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
	printf("\n");
}
