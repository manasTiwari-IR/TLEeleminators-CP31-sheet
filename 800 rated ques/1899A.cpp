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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if((n+1)%3==0)
        {
            cout<<"First"<<endl;
        }
        else if((n-1)%3==0)
        {
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
}