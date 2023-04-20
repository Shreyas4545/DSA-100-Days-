#include<iostream>
using namespace std;
class patient{
private:
    long long mobile;
public:
    string name;
    static int counter;
    int id;
    patient(string a,long long c):name(a),mobile(c){
    id=++counter;
    };
    void print()
    {
        cout<<name<<endl<<id<<endl<<mobile<<endl;
    }
    static int searchit(patient p[],int n,long long c)
    {
        int flag=-1;
        for(int i=0;i<n;i++)
        {
            if(p[i].mobile==c)
            {
             flag=i;
            }
        }
        return flag;
    }
};
int patient::counter=0;
int main()
{
    long long y;
    patient p[]={patient("Shreyas",8792169865),patient("Hitman",12345678910),patient("Kid",2345678910)};
    cin>>y;
    int x=patient::searchit(p,3,y);
    for(int i=0;i<3;i++)
    {
        if(i==x){
        p[x].print();
        }
    }
    return 0;
}
