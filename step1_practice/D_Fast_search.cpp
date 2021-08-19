#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mx 1e5
vector<int> a(mx);
int n;
int solve(int x)
{
 int l = -1, r = n;
 while (r > l + 1)
 {
  int mid = (l + r) / 2;
  // cout << mid << " ";
  if (a[mid] < x)
   l = mid;
  else
   r = mid;
 }
 return r;
}
// 1 3 4 10 10

int solve2(int x)
{
 int l = -1, r = n;
 while (r > l + 1)
 {
  int mid = (l + r) / 2;
  // cout << mid << " ";
  if (a[mid] > x)
   r = mid;
  else
   l = mid;
 }
 return l;
}
signed main()
{
 int k;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> a[i];
 }
 sort(a.begin(), a.begin() + n);
 cin >> k;
 while (k--)
 {
  int l, r;
  cin >> l >> r;
  int left = solve(l);
  int right = solve2(r);
  cout << right - left + 1 << " ";
 }
 return 0;
}