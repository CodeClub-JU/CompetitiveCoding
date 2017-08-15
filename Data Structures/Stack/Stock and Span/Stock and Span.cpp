#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
	for(int i=0; i<v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;	
}

int main()
{
	int i, n, count;
	stack<int> s;	
	
	cin >> n;
	vector<int> arr(n), ans(n);
	
	for(i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	ans[0] = 1;
	s.push(0);
	
	for(i=1; i<n; i++)
	{
		while(!s.empty() && arr[i] > arr[s.top()])
			s.pop();			
		ans[i] = s.empty() ? i+1: i-s.top();
		s.push(i);	 	
	}
	
	print(ans);
}
