#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, cnt = 0;
  cin >> n;
  for (int i = 1; i < n; i++)
  {
    if (n % i == 0)
      cnt++;
  }
  cout << cnt;

  return 0;
}