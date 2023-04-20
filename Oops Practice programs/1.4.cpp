#include<iostream>
using namespace std;
class student{
public:
    string name;
    int srn;
    long long mob;
    string btitle;
    string status;
    student(string a,int b,long long c):name(a),srn(b),mob(c){};
    void print(){
    cout<<name<<":"<<srn<<":"<<mob<<":"<<":"<<btitle<<":"<<status<<endl;
    }
};
class book{
public:
    string title;
    string publisher;
    int flag=0;
    book(){
    title="";
    publisher="";
    };
    book(string x,string y):title(x),publisher(y){
    };
    void print()
    {
        cout<<title<<endl<<publisher<<endl;
    }
};
class library{
public:
    string name;
    string librarian;
    int flag;
    library(string a,string b):name(a),librarian(b){};
    //book*b[3];
    //student*s[3];
    library(){
    name="";
    librarian="";
    };
    int search1(string g,book b[])
    {
        for(int i=0;i<3;i++)
        {
        if(g==b[i].title)
        {
            flag=1;
            return 1;
        }
        else{return 0;}
        }
    }
    void issue(student s[],book b[])
    {
        int x=search1("A",b);
        if(x==1){
        for(int i=0;i<3;i++)
        {
            s[i].btitle=b[i].title;
            s[i].status="Issued";
        }
        }
    }
    void print2(student s[])
    {
     cout<<name<<endl<<librarian<<endl;
     for(int i=0;i<3;i++)
     {
         s[i].print();
     }
    }

};
int main()
{
    student s1("Shreyas",1,8792169865),s2("Amit",2,9731994885),s3("Rakesh",3,8123831667);
    student s[]={s1,s2,s3};
    book b1("A","x"),b2("B","y"),b3("C","z");
    book b[]={b1,b2,b3};
    library r("Kle tech","mahesh");
    r.issue(s,b);
    r.print2(s);
    return 0;
}
