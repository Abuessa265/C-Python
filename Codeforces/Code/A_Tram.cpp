#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a, b, x = 0, y = 0;
  cin >> n;
  int sum = 0, k = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b;
    x = x - a + b;
    if (y <= x)
      y = x;
  }
  cout << y;
}