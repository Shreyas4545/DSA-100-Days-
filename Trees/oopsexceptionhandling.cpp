#include<iostream>
using namespace std;
class Myexception:exception
{
    public:
      char*what()
    {
        return "Error in this";
    }
};
int division(int a,int b)
{
    if(b==0)
        throw Myexception();
    return a/b;
}
int main()
{
    int x=10,y=0,c;
    try{
    c=division(x,y);
    cout<<c;
    }
    catch(Myexception e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}
