#include<bits/stdc++.h>
using namespace std;

class course
{
    int id;
    string cname;
    int marks;

    public:
    course()
    {
        id = 0;
        cname = "default";
        marks = 100;
    }

    course(int id, string cname, int marks)
    {
        this->id = id;
        this->cname = cname;
        this->marks = marks;
    }

    void printcourse()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Course Name: "<<cname<<endl;
        cout<<"Marks: "<<marks<<endl;
    }

    void setcourse(int n, string s, int p)
    {
        id = n;
        cname = s;
        marks= p;
    }

    int getmarks()
    {
        return marks;
    }
};

class student
{
    private:
    int sid;
    string sname;
    course c[5];
    float total = 0;

    public:
    student()
    {
        sid = 0;
        sname = "xyz";
    }

    student(int sid, string sname, course c[])
    {
        this->sid = sid;
        this->sname = sname;
        for(int i=0;i<5;i++)
        {
            this->c[i] = c[i];
        }
    }

    void printstudent();
    void caltotal()
    {
        for(int i=0;i<5;i++)
        {
            total+=c[i].getmarks();
        }
    }
    void calpercent()
    {
        cout<<(float)((total/500)*100)<<endl;
    }

    void setsid()
    {
        int s;
        cout<<"Enter student id"<<endl;
        cin>>s;
        sid = s;
    }

    void setname()
    {
        string s;
        cout<<"Enter student name"<<endl;
        cin>>s;
        sname = s;
    }

    void setcourse()
    {
        for(int i=0;i<5;i++)
        {
            string s;
            int n, p;

            cout<<"Enter course id, course name and marks\n";
            cin>>n>>s>>p;
            c[i].setcourse(n,s,p);
        }
    }

    void setvalue()
    {
        setsid();
        setname();
        setcourse();
        caltotal();
    }
};

void student:: printstudent()
{
    cout<<"Student Id: "<<sid<<endl;
    cout<<"Student Name: "<<sname<<endl;
    for(int i=0;i<5;i++)
    {
        c[i].printcourse();

    }

    cout<<"Total Marks: "<<total<<endl;
    calpercent();
}
int main()
{
    int n;
    cout<<"Enter the number of students: "<<endl;
    cin>>n;

    course c[5];
    student s[n], a;
    for(int i=0;i<n;i++)
    {
        s[i].setvalue();

    }
    for(int i=0;i<n;i++)
    {
        s[i].printstudent();
    }

    return 0;
}
