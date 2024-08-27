#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
#define ll long long
#define lli long long int
#define F first
#define S second
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define s(x) sort(all(x))
#define f(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
// using namespace boost::multiprecision;
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int flag=0;
        for(int i=0; i<n; i++)
        {
           for(int j=1; j<n-1; j++)
           {
               if(arr[j]>arr[j-1] &&  arr[j]>arr[j+1])
               {
                   swap(arr[j], arr[j+1]);
                   
               }
           }
        }
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
}