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
  int tc;
  cin >> tc;
  while (tc--)
  {
    string s;
    int m;
    cin >> s >> m;
    vector<int> v(m), alp(26, 0), ans(m);
    FOR(i, 0, m)
    {
      cin >> v[i];
    }
    FOR(i, 0, s.size())
    {
      alp[s[i] - 'a']++;
    }
    bool ok = true;
    int last = 25;
    while (ok)
    {
      vector<int> z;
      ok = false;
      FOR(i, 0, m)
      {
        if (v[i] == 0)
        {
          z.pb(i);
          ok = true;
          v[i] = -1;
        }
      }
      while (alp[last] < z.size())
      {
        if (last == 0)
        {
          cout << "OH NO" << ENDL;
          break;
        }
        last--;
      }
      for (auto i : z)
      {
        ans[i] = last;
      }
      last--;

      FOR(i, 0, m)
      {
        if (v[i] > 0)
        {
          for (auto val : z)
          {
            v[i] -= abs(i - val);
          }
        }
      }
    }
    for (auto c : ans)
    {
      cout << char(c + 'a');
    }
    cout << ENDL;
  }
  return 0;
}