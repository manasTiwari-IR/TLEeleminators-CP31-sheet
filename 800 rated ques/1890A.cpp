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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        f(i, n)
                cin >>
            a[i];
        if (n == 2)
            yes;
        else if (n == 3)
        {
            if (a[0] + a[1] == a[2] || a[0] + a[2] == a[1] || a[1] + a[2] == a[0])
                yes;
            else
                no;
        }
        else
        {
            bool f = true;
            int x = a[0];
            for (int i = 1; i < n; i++)
            {
                if (a[i] != x)
                {
                    f = false;
                    break;
                }
            }
            if (f)
                yes;
            else
            {
                no;
            }
        }
    }

    return 0;
}