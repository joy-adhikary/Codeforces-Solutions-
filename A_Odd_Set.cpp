/*
           HAR HAR MAHADEV
<<<<<<< HEAD
              _SPIDER_ 
=======
              _SPIDER_2.0_
>>>>>>> 8th time
                                  */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<ll, ll> ml;
typedef map<string, ll> ms;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;

#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define NO cout << "NO" << endl;
#define YES cout << "YES" << endl;
#define no cout << "No" << endl;
#define yes cout << "Yes" << endl;
#define all(x) (x).begin(), (x).end()
#define Sort(s) sort(s.begin(), s.end())
#define test   \
    int t, tc; \
    cin >> t;  \
    for (tc = 0; tc < t; tc++)
#define deb(a) cerr << "Line " << __LINE__ << " # " << #a << " -> " << a << endl;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define for9(i, n) for (int i = n - 1; i >= 0; i--)

bool squre(ll x)
{
    ll y = round(sqrt(x));
    if (y * y == x)
        return 1;
    else
        return 0;
}

int main()
{
    fio;
    test
    {
<<<<<<< HEAD
        int n, even = 0, odd = 0;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            if (x & 1)
                odd++;
            else
                even++;
        }
        if (n == odd)
        {
            yes
        }
        else
            no
    }
    return 0;
}
=======
        int n, k, l;
        vi v;
        cin >> n;
        int count = 0, sum = 0;
        for0(i, n)
        {
           // count = 0;
           
            cin >> k >> l;
            sum=k+l;
            if (sum % 2 == 0)
            {
                v.pb(1);
            }
            else v.pb(0); sum = 0;

        }
        for(int i=0;i<n;i++)
        {
           
             if(v[i]==1)
             {
                 count=1;
                // break;
             }
             // cout<<v[i]<<endl;
        }
        if (count==0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}//
//36 95 64 75 62 36 88 25 15 19
>>>>>>> 8th time
