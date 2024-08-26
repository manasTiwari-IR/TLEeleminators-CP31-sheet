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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        int cnt = 0;
        for(char x : s)
        {
            if(x == '.')
            cnt++;
            if(x == '#' && cnt > 0)
            {
                ans += cnt;
                cnt = 0;
            }
            if(cnt == 3)
            {
                ans = 2;
                break;
            }
        }
        if(s[n-1] == '.' && cnt > 0 && cnt<=2)
        ans += cnt;
        cout<<ans<<endl;
    }

return 0;
}