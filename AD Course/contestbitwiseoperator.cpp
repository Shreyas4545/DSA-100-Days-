#include <bits/stdc++.h>
using namespace std;

long long convert1(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}

int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int x=convert(n);
        int y=1;
        int z=x/pow(2,y);
        int g=(x^z);
        cout<<z<<endl<<g<<endl;
        while(g<x)
        {
            y++;
            z=x/pow(2,y); 
            g=(x^z);
        }
        cout<<y<<endl;
    }
	return 0;
}
