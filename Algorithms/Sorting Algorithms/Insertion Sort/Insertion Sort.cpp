#include <iostream>
using namespace std;
#define MAX 1000
void insertion_sort(int arr[MAX], int n);
void swap(int *p, int *q);
int main()
{
	int n, *arr, i, j;
	cout << "///Insertion Sort///\n\nEnter the number of array elements: ";
	cin >> n;
	arr = new int[n];
	cout << "Enter the array elements: ";
	for(i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	insertion_sort(arr, n);
	cout << "The sorted array is:" << endl;
	for(i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	delete []arr;
	fflush(stdin);
	getchar();
	return 0;
}
void insertion_sort(int arr[MAX], int n)
{
	int i, j, key;
	for(i=0; i<n; i++)
	{
		key = arr[i];
		for(j=i-1; j>=0; j--)
		{
			if(arr[j] > key)
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}
void swap(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
