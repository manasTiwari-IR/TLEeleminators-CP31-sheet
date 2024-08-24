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

void SeiveofEratosthenes(vector<bool>&P ,int n)
{
    P[0] = P[1] = false;
    fill(P.begin(), P.end(), true);

    for (int K = 2; K * K <= n; K++)
    {
        if (P[K] == true)
        {
            for (int i = K * K; i <= n; i += K)
                P[i] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n,0);
        for(int i =0;i<n;i++)
        {
            int x;
            cin>>x;
            a[i] = x;
        }
        if(is_sorted(a.begin(),a.end())) yes;
        else if( k == 1)
        no;
        else if  (n ==1)
        no;
        else yes;
    }

return 0;
}