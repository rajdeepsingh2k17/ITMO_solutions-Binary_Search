#include <bits/stdc++.h>
using namespace std;
#define mx 1e5
vector<int> a(mx);
int n;
void solve(int x)
{
 int l = -1, r = n;
 while (l + 1 < r)
 {
  int m = (l + r) / 2;
  if (a[m] < x)
   l = m;
  else
   r = m;
 }
 if (a[r] == x)
  cout << "YES\n";
 else
  cout << "NO\n";
}
int main()
{
 int k;
 cin >> n >> k;
 for (int i = 0; i < n; i++)
  cin >> a[i];
 while (k--)
 {
  int x;
  cin >> x;
  solve(x);
 }
 return 0;
}