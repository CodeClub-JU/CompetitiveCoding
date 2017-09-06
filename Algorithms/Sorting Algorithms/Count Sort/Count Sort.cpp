#include <iostream>
#include <climits>
using namespace std;
#define MAX 1000
void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int max(int arr[], int n)
{
	int max = INT_MIN;
	for(int i=0; i<n; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}
void count_sort(int arr[], int B[], int n)
{
	int i, k = max(arr, n); 
	int C[k+1] = {0};
	for(i=0; i<n; i++)
	{
		C[arr[i]]+=1;
	}
	for(i=1; i<=k; i++)
	{
		C[i]+=C[i-1];
	}
	for(i=n-1; i>=0; i--)
	{
		B[C[arr[i]]-1] = arr[i];
		C[arr[i]]-=1;
	}
}
int main()
{
	int n, *arr, *B, i, j;
	cout << "///Count Sort///\n\nEnter the number of array elements: ";
	cin >> n;
	arr = new int[n];
	B = new int[n];
	cout << "Enter the array elements: ";
	for(i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	count_sort(arr, B, n);
	cout << "The sorted array is:" << endl;
	print(B, n);
	delete []arr;
	delete []B;
	fflush(stdin);
	getchar();
	return 0;
}
