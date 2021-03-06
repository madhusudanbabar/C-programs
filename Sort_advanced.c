#include<stdio.h>
#define des												//write des for DESCENDING defaul : ASCENDING
int sort(int *,int );							//function to sort the array
int ArrayIO(int *,int ,int );						//to scan and/or printthe elements in the array
int main()
{
	printf("Enter the size of array : ");				//size of array
	int length;
	scanf("%d",&length);
	int arr[length];
	printf("Enter the elements now : \n");
	ArrayIO(arr,length,1);						// 1 is for scanf
	printf("Org. array :\t");
	ArrayIO(arr,length,2);						// 2 is for printf
	sort(arr,length);						// sorting the array
	#ifdef des
		printf("ARRAY DESC :\t");
	#endif
	#ifndef des
		printf("ARRAY ASC :\t");
	#endif
	ArrayIO(arr,length,2);						// printing sorted array
}

int sort(int *arr,int length)
{
	for(int i=0;i<length;i++)
	{
		for(int j=i;j<length;j++)
		{
			#ifdef des
				if (arr[i]<arr[j])				// swapping the elements in DESCENDING order
				{
					arr[i]=arr[j]+arr[i];		// without using another temporary variable
					arr[j]=arr[i]-arr[j];
					arr[i]=arr[i]-arr[j];
				}
			#endif

			#ifndef des
				if (arr[i]>arr[j])				// swapping the elements in ASCENDING order
				{
					arr[i]=arr[j]+arr[i];		// without using another temporary variable
					arr[j]=arr[i]-arr[j];
					arr[i]=arr[i]-arr[j];
				}
			#endif
		}
	}
}


int ArrayIO(int *arr,int length,int operation)
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
