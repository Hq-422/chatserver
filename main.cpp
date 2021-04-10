#include<iostream>
using namespace std;
void Sort(int arr[], int n)
{
	int tmp = 0;
	for(int i = 0;i < n - 1;++i)
	{
		for(int j = 0;j < n - 1 - i;++j)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}

		}
	}
}

int main()
{
	int arr[] = { 2,2,2,3,2,4,2,6,7,8,2,2,2,2 };
	int size = sizeof(arr) / sizeof(arr[0]);
	Sort(arr, size);

	return 0;
}
