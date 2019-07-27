#include<stdio.h>
int sort(int *,int );							//function to sort the array
int main()
{
	int length,i;
	printf("Enter the size of array : ");				//size of array
	scanf("%d",&length);
	int arr[length];
	printf("Enter the elements now :\n");
	for (i = 0; i < length; i++)
	{
		scanf("%d",&arr[i] );
	}
	printf("Array before sorting :\t");
	for (i = 0; i < length; i++)
	{
		printf("%d\t",arr[i] );
	}
	sort(&arr[0],length);						// sorting the array
	printf("\nArray after sorting :\t");
	for (i = 0; i < length; i++)
	{
		printf("%d\t",arr[i] );
	}
}

int sort(int *arr,int length)
{
	int i,j,temp;
	for(i=0;i<length;i++)
	{
		for(j=i;j<length;j++)
		{
			if (arr[i]>arr[j])				// swapping the elements without using another temporary variable
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
