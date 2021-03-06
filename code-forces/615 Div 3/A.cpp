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
    vector<lli> num(3);
    lli n, total;
    cin >> num[0] >> num[1] >> num[2] >> n;
    sort(num.rbegin(), num.rend());
    total = abs(num[0] - num[1]);
    total += abs(num[0] - num[2]);
    if (n >= total && (n - total) % 3 == 0)
    {
      cout << "YES" << ENDL;
    }
    else
    {
      cout << "NO" << ENDL;
    }
  }
  return 0;
}