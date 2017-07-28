#include <iostream>
#include <string>
#include <stack>
using namespace std;

//Balanced Bracket C++ implementation

bool balanced(string s)
{
	stack<char> st;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == '[' || s[i] == '{' || s[i] == '(')
			st.push(s[i]);
		else
		{
			if(!st.empty())
			{
				if( (s[i]==']'&&st.top()!='[') || (s[i]=='}'&&st.top()!='{') || (s[i]==')'&&st.top()!='('))
					return false;
			}
			else
				if(s[i] == ']' || s[i] == '}' || s[i] == ')')
					return false;
			st.pop();
		}
	}
	if(st.empty())
		return true;	//If the string is balanced, then all the open brackets pushed in
	else				//the stack must be exhausted to complete the closed brackets
		return false;
}

int main()
{
	int t;
	string s;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		cin >> s;
		if(balanced(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
