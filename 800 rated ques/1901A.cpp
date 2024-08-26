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

// void SeiveofEratosthenes(vector<bool>&P ,int n)
// {
//     P[0] = P[1] = false;
//     fill(P.begin(), P.end(), true);

//     for (int K = 2; K * K <= n; K++)
//     {
//         if (P[K] == true)
//         {
//             for (int i = K * K; i <= n; i += K)
//                 P[i] = false;
//         }
//     }
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
       int n,x;
       cin>>n>>x;
       vector<int> a(n);   
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
        int maxi = 0;
        int cnt = 0;
       for(int i=0;i<=n;i++)
       {
            if(i == 0)
            maxi = max(maxi,a[i]);
            else if(i == n)
            maxi = max(maxi,(x-a[n-1])*2);
            else{
                maxi = max(maxi,a[i]-a[i-1]);
            }
       }
       cout<<maxi<<endl;
    }

return 0;
}