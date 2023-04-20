#include<bits/stdc++.h>
using namespace std;
void splitNumber(std::vector<int>& digits, int number) {
  if (0 == number) { 
    digits.push_back(0);
  } else {
    while (number != 0) {
      int last = number % 10;
      digits.push_back(last);
      number = (number - last) / 10;
    }
  }
}

int main()
{
    int n,k,count=0,max=0;
    cin>>n>>k;
    vector<int>v;
    deque<int>d;
   splitNumber(v,n);
for(int i=0;i<v.size();i++)
{
    d.push_front(v[i]);
}
for(int i=0;i<d.size();i++)
{
    for(int j=0;j<d.size();j++)
    {

    }
}
return 0;
}