#include <iostream>
#include <climits>
using namespace std;
#define MAX 1000
void merge_sort(int arr[MAX], int l, int u);
void combine(int arr[MAX], int l, int u, int m);
int main()
{
	int n, *arr, i, j;
	cout << "///Merge Sort///\n\nEnter the number of array elements: ";
	cin >> n;
	arr = new int[n];
	cout << "Enter the array elements: ";
	for(i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	merge_sort(arr, 0, n-1);
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
void combine(int arr[MAX], int l, int u, int m)
{
	int i, j, k, L[MAX], R[MAX];
	for(i=l; i<=m; i++)
	{
		L[i-l] = arr[i];
	}
	L[i-l] = INT_MAX;
	for(i=m+1; i<=u; i++)
	{
		R[i-m-1] = arr[i];
	}
	R[i-m-1] = INT_MAX;
	i = j = 0;
	k = l;
	while(k<=u)
	{
		if(L[i] < R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
}
void merge_sort(int arr[MAX], int l, int u)
{
	int m = (l+u)/2;
	if(l<u)
	{
		merge_sort(arr, l, m);
		merge_sort(arr, m+1, u);
		combine(arr, l, u, m);	
	}
}
