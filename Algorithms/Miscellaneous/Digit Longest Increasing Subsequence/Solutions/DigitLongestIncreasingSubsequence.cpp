    #include<iostream>
    #include<iomanip>
    #include<string>
    #include<vector>
    #include<stack>
    #include<deque>
    #include<queue>
    #include<cmath>
    #include<set>
    #include<map>
    #include<algorithm>
    #define For(i,a,b) for(int i=a;i<b;i++)
    #define Forb(i,a,b) for(int i=a;i>=b;i--)
    #define lli long long int
    #define ld long double
    #define ulli unsigned long long int
    #define ui unsigned int
    #define Max(a,b) (a>b?a:b)
    #define Min(a,b) (a<b?a:b)
    using namespace std;
    /*-----------------------creator:soham mukherjee---------------------------------------------*/
     
    int main()
    {
     
     int t;
     cin>>t;
     while(t--)
     {
       int n;
       cin>>n;
       vector<int>arr(n);
       int max=0,pos=0;
       For(i,0,n)
       {
         cin>>arr[i];
         
       }
       For(i,0,n)
       {
         cout<<arr[i];
       }
       cout<<endl;
     }
      return 0;
    } 
