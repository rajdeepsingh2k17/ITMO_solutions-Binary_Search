#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mx 1e5
vector<int> a(mx);
int n;
void solve(int x)
{
 int l = -1, r = n;
 while (r > l + 1)
 {
  int mid = (l + r) / 2;
  // cout << mid << " ";
  if (a[mid] <= x)
   l = mid;
  else
   r = mid;
 }
 cout << l + 1 << "\n";
}
signed main()
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