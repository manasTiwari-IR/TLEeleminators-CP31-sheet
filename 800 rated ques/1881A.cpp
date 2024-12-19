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

int checkSubstr(string x, string s)
{
    // check if s is already a substring of x
    if (x.find(s) != string::npos)
        return 0;

    // n.m <= 25, so if m = 25 then n = 1, so there should be a maximum of 5 operations
    for (int i = 0; i < 5; i++)
    {
        x += x;
        if (x.find(s) != string::npos)
            return i + 1;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;
        cout << checkSubstr(x, s) << endl;
    }
    return 0;
}
