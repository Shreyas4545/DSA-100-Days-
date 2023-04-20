#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void print_sum(int index, vector<int> &v, int a[], int sum, int n, int ans)
{
    if (index == n)
    {
        if (ans == sum)
        {
            for (auto i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        return;
    }
    v.push_back(a[index]);
    ans += a[index];
    print_sum(index + 1, v, a, sum, n, ans);
    ans -= a[index];
    v.pop_back();
    print_sum(index + 1, v, a, sum, n, ans);
}

int main()
{
    int a[] = {1, 2, 3};
    vector<int> v;
    print_sum(0, v, a, 3, 3, 0);
}