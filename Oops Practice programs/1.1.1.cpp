#include<iostream>
using namespace std;
class cricketplayer{
public:
    string name;
    int inn;
    int runs;
    int bat_avg;
    cricketplayer(){
        bat_avg=0;
    }
    cricketplayer(string a,int b,int c,int d):name(a),inn(b),runs(c),bat_avg(d){};
    void batting(cricketplayer c[],int x)
    {
        int g;
        cin>>g;
        for(int i=0;i<3;i++)
        {
            if(i==x){
            c[i].bat_avg+=g;
            }
        }
    }

    void print()
    {

        cout<<name<<endl<<inn<<endl<<runs<<endl<<bat_avg<<endl;

    }
    void display(cricketplayer c[])
    {
        for(int i=0;i<3;i++)
        {
            c[i].print();
        }
    }
    int get_player(cricketplayer c[])
    {
        for(int i=0;i<3;i++)
        {
            for(int j=i+1;j<3;j++)
            {
                if(c[i].bat_avg>c[j].bat_avg)
                {
                    return i;
                }
            }
        }
    }
    void display1(cricketplayer c[],int a)
    {
        for(int i=1;i<=3;i++)
        {
            if(i==a)
            {
                c[i].print();
            }
        }
    }
};
int main()
{
    int y;
    cricketplayer c1("A",5,100,50),c2("B",5,110,60),c3("C",5,120,70);
    cricketplayer c[]={c1,c2,c3};
    cricketplayer C;
    //cin>>y;
    //C.batting(c,y);
    //C.display(c);
    int x=C.get_player(c);
    cout<<x;
    C.display1(c,x);
    return 0;
}
