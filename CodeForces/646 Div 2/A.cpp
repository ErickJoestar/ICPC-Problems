#include <bits/stdc++.h>
#define ENDL '\n'
#define deb(u) cout << #u " : " << (u) << ENDL;
#define deba(alias, u) cout << alias << ": " << (u) << ENDL;
#define debp(u, v) cout << u << " : " << v << ENDL;
#define pb push_back
#define F first
#define S second
#define lli long long
#define pii pair<int, int>
#define pll pair<lli, lli>
#define ALL(a) (a).begin(), (a).end()
#define ALLR(a) (a).rbegin(), (a).rend()
#define FOR(i, a, n) for (int i = (a); i < (n); ++i)
#define FORN(i, a, n) for (int i = (a - 1); i >= n; --i)
#define IO                          \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0)
using namespace std;

int main()
{
  IO;
  int t;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n >> x;
    int odd = 0, non = 0;
    FOR(i, 0, n)
    {
      int val;
      cin >> val;
      if (val % 2)
        odd++;
      else
        non++;
    }
    // deb(odd);
    // deb(non);
    if (odd > 0)
    {
      x--;
      odd--;
      x -= min(x - x % 2, odd - odd % 2);
      x -= min(x, non);
      if (x == 0)
      {
        cout << "Yes" << ENDL;
      }
      else
        cout << "No" << ENDL;
    }
    else
      cout << "No" << ENDL;
  }
  return 0;
}