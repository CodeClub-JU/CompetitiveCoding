#include <iostream>
using namespace std;

void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";		
	}
	cout << endl;
}

int left_child(int i)
{
	return 2*i+1;	
}

int right_child(int i)
{
	return 2*i+2;
}

void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

void max_heapify(int arr[], int heap_size, int i)
{
	int max, l = left_child(i), r = right_child(i);
	if(l<heap_size && arr[i]<arr[l])
		max = l;
	else
		max = i;
	if(r<heap_size && arr[max]<arr[r])
		max = r;
	if(max!=i)
	{
		swap(arr[max], arr[i]);
		max_heapify(arr, heap_size, max);	
	}
}

void build_max_heap(int arr[], int n)
{
	int i, m = (n/2)-1;
	for(i=m; i>=0; i--)
	{
		max_heapify(arr, n, i);
	}
}

void heap_sort(int arr[], int n)
{
	int i, heap_size = n;
	build_max_heap(arr, n);
	for(i=n-1; i>0; i--)
	{
		swap(arr[i], arr[0]);
		heap_size--;
		max_heapify(arr, heap_size, 0);
	}
}	

int main()
{
	int i, n, *arr;
	cout << "Enter the number of elements of the array: ";
	cin >> n;
	arr = new int[n];
	cout << "Enter the array elements: " << endl;
	for(i=0; i<n; i++)
	{
		cout << "Enter element [" << i+1 << "]: ";
		cin >> arr[i];		
	}
	heap_sort(arr, n);
	cout << "The sorted array is:" << endl;
	print(arr, n);
	return 0;
}
