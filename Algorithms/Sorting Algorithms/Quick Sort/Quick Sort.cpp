#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}
int partition(int arr[], int l, int u)
{
	int pivot = arr[u], i = l-1;
	for(int j=l; j<u; j++)
	{
		if(arr[j] < pivot)
		{
			i++;
			swap(arr[j], arr[i]);
		}
	}
	swap(arr[i+1], arr[u]);
	return i+1;
}
void quick_sort(int arr[], int l, int u)
{
	if(l<u)
	{
		int m = partition(arr, l, u);
		quick_sort(arr, l, m-1);
		quick_sort(arr, m+1, u);
	}
}
int main()
{
	int n, *arr;
	cout << "Enter the number of elements: ";
	cin >> n;
	arr = new int[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	quick_sort(arr, 0, n-1);
	for(int i = 0; i<n; i++)
	{
		cout << arr[i] << " ";	
	}	
	delete []arr;
	fflush(stdin);
	getchar();
	return 0;
}
