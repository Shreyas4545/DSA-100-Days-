#include<iostream>
using namespace std;
void changeData(int &a)
{
    a+=10;
}
int main()
{
    int x=10;
    changeData(x);
    cout<<x<<endl;
}
