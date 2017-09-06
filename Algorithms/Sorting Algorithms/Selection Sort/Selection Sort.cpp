#include <iostream>
using namespace std;
#define MAX 1000
void selection_sort(int arr[MAX], int n);
void swap(int *p, int *q);
int main()
{
	int n, *arr, i, j;
	cout << "///Selection Sort///\n\nEnter the number of array elements: ";
	cin >> n;
	arr = new int[n];
	cout << "Enter the array elements: ";
	for(i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	selection_sort(arr, n);
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
void selection_sort(int arr[MAX], int n)
{
	int i, j;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[j] < arr[i])
			{
				swap(&arr[i], &arr[j]);
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
