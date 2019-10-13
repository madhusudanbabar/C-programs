#include<stdio.h>							
int main()
{
	int length,i,j,temp;
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
	//sorting process
	for(i=0;i<length;i++)
	{
		for(j=i;j<length;j++)
		{
			if (arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nArray after sorting :\t");
	for (i = 0; i < length; i++)
	{
		printf("%d\t",arr[i] );
	}
}
