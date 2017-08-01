#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1,cnt=0;

    int ans=0;
    while(i<=n)
    {
        ans=ans+(n/i);
        if(n>=i*i)
        cnt++;
        i++;
    }
    ans=ans+(cnt);
    ans=ans/2;

    cout<<ans;
    return 0;
}
