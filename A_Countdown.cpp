/*
<<<<<<< HEAD
           HAR HAR MAHADEV
              _SPIDER_ 
                                  */

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

=======
                           HAR HAR MAHADEV
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
<<<<<<< HEAD
=======
#define nn cout<<endl;
>>>>>>> 8th time
#define NO cout << "NO" << endl;
#define YES cout << "YES" << endl;
#define no cout << "No" << endl;
#define yes cout << "Yes" << endl;
<<<<<<< HEAD
#define nn cout << endl;
#define all(x) (x).begin(), (x).end()
#define Sort(s) sort(s.begin(), s.end())
#define test  \
   int t, tc; \
   cin >> t;  \
   for (tc = 0; tc < t; tc++)
=======
#define all(x) (x).begin(), (x).end()
#define Sort(s) sort(s.begin(), s.end())
#define test   \
    int t, tc; \
    cin >> t;  \
    for (tc = 0; tc < t; tc++)
>>>>>>> 8th time
#define deb(a) cerr << "Line " << __LINE__ << " # " << #a << " -> " << a << endl;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define for9(i, n) for (int i = n - 1; i >= 0; i--)
<<<<<<< HEAD
const ll N = 1e5 + 3;

int main()
{
   fio;
   test
   {
      int n;
      cin >> n;
      string str;
      cin >> str;
      int count = 0;
      int last = str[n - 1];
      int sum = 0;
      for0(i, n)
      {
         sum = sum + str[i] - '0';
         if (str[i] == '0')
            count++;
      }
      int len = n - count;
      ll ans = sum + len;
      if (last != '0')
         ans--;
      cout << ans;
      nn;
   }
   /*
      int sum = 0;
      for0(i, n)
      {
         if (str[i] != '0')
         {
            sum = sum + (str[i] - '0' + 1);
         }
      }
      if (str[n - 1] != '0')
         sum--;

      cout << sum;
      nn; */

   return 0;
}
=======
//const ll N=1e5+3;


int main()
{
    fio;
    
}
>>>>>>> 8th time
