#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool check(int i, string s, int n) 
{
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    return check(i + 1, s, n);
}

int main()
{
    string s;
    getline(cin, s);
    cout << check(0, s, s.size()) << " ";
}