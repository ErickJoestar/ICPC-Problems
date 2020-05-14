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
    {
      int aux;
      cin >> aux;
      int res = 0;
      if (aux < 0)
        res = n - (-aux) % n;
      else
      {
        res = aux % n;
      }
      v[i] = (i + res) % n;
      // deb(v[i]);
    }
    sort(ALL(v));
    bool ok = true;
    FOR(i, 1, n)
    {
      if (v[i] == v[i - 1])
      {
        ok = false;
        break;
      }
    }
    if (ok)
      cout << "YES" << ENDL;
    else
      cout << "NO" << ENDL;
  }
  return 0;
}