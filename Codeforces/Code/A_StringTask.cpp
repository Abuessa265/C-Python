#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  char c;
  while (cin >> c)
  {
    if (!strchr("AEIOUYyaeiou", c))
      cout << '.' << (char)tolower(c);
  }
}