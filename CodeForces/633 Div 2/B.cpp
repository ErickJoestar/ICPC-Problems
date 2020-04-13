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
#define FORN(i, a, n) for (int i = (a - 1); i >= (n); --i)
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
    int n, m;
    bool isEven = false;
    cin >> n;
    vector<int> num(n);
    FOR(i, 0, n)
    {
      cin >> num[i];
    }
    sort(ALL(num));
    if (n % 2 == 1)
    {
      m = num[0];
      isEven = true;
      num.erase(num.begin());
    }
    FOR(i, 0, n / 2)
    {
      cout << num[n / 2 - i - 1] << " " << num[n / 2 + i] << " ";
    }
    if (isEven)
    {
      cout << m;
    }
    cout << ENDL;
  }
  return 0;
}