/*
           HAR HAR MAHADEV
<<<<<<< HEAD
              _SPIDER_ 
                                  */
                                 
 
#include <bits/stdc++.h>
using namespace std;
 
=======
              _SPIDER_2.0_
                                  */

#include <bits/stdc++.h>
using namespace std;

>>>>>>> 8th time
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
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
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
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
bool squre(ll x)
{
    ll y = round(sqrt(x));
    if (y * y == x)
        return 1;
    else
        return 0;
}
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
int main()
{
    fio;
    test
    {
        ll n;
        ll sum = 0, k, count = 0;
        vll v;
        cin >> n;
        for0(i, n)
        {
            cin >> k;
            sum += k;
            v.pb(k);
        }
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
        if (sum % n != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            for0(i, n)
            {
                if (v[i] > sum / n)
                    count++;
            }
            cout << count << endl;
        }
    }
<<<<<<< HEAD
 
=======

>>>>>>> 8th time
    return 0;
}