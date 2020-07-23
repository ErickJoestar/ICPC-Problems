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
    int n;
    cin >> n;
    vector<int> v(n);
    FOR(i, 0, n)
    cin >> v[i];
    bool zero = false, one = false;
    FOR(i, 0, n)
    {
      int u;
      cin >> u;
      if (u == 0)
        zero = true;
      else
        one = true;
    }
    bool isSorted = true;
    FOR(i, 1, n)
    {
      if (v[i] < v[i - 1])
      {
        isSorted = false;
        break;
      }
    }
    // deb(zero);
    // deb(one);
    // deb(isSorted);
    if ((zero && one) || isSorted)
      cout << "Yes" << ENDL;
    else
      cout << "No" << ENDL;
  }
  return 0;
}