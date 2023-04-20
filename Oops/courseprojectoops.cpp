#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <fstream>
#include<bits/stdc++.h>
using namespace std;
int never_used;

class InvalidParameter
{
public:
    string msg;
    InvalidParameter(string s) : msg(s) {}
    const string show()
    {
        return msg;
    }
};

class InsufficientBalance
{
public:
    string msg;
    InsufficientBalance(string s) : msg(s) {}
    const string show()
    {
        return msg;
    }
};

class User
{
public:
    int id;
    string name;
    string useType;
    float amount;
    float costPerUnit;

    User() : id(0), name(""), useType("") {}
    User(int id, string n, string type) : id(id), name(n), useType(type) {}

    virtual void print()
    {
        cout << "id"
             << ":" << id << endl
             << "name"
             << ":" << name << endl
             << "user type"
             << ":" << useType << endl;
    }
    virtual void getinput()
    {
        cout<<"Please enter the details of user"<<endl;
        cout<<"ID: "<<"Name: "<<"useType: "<<""<<endl;
        cin>>id>>name>>useType;
    }
    virtual void computeBalance()
    {
    }

    virtual void pay()
    {
    }
};

//Singleton design pattern as we only need 1 instance of admin
class Admin : public User
{
    static Admin *instance;

    Admin() : User(), costPerUnit(0) {}

public:
    int id1;
    float costPerUnit;
    static Admin *getInstance()
    {
        if (!instance)
            instance = new Admin;
        return instance;
    }

    int getData()
    {
        return this->costPerUnit;
    }

    void updateCpu(float data)
    {
        this->costPerUnit = data;
    }

    void print()
    {
        User::print();
        cout << "Cost Per Unit"
             << ":" << costPerUnit << endl;
    }
    void removeemployee()
    {
        cout<<"Enter the employee which you want to remove"<<endl;
        cin>>id1;
    }
};

Admin *Admin::instance = 0;

class EBMS
{
public:
    string name;
    EBMS(string a)
    {
        name = a;
    }
    void printdetails()
    {
        cout << "Welcome to the " << name << " Electricity Bill Management System" << endl;
        // admin->print();
    }
};

class Employee : public User
{
public:
    Employee() : User() {}
    Employee(int id, string n, string type) : User(id, n, type) {}
    void getinput()
    {
        User::getinput();
    }
    void print()
    {
        User::print();
    }
};

class DomesticUser : public User
{
public:
    float dUserBalance;
    int unit;

    DomesticUser() : User(), dUserBalance(0), unit(0) {}
    DomesticUser(int id, string n, string type, float dub, int u) : User(id, n, type), dUserBalance(dub), unit(u) {}

    void pay(float amt)
    {
        if (amt > dUserBalance)
            throw("Insufficient balance");
        amount = amt;
        dUserBalance -= amt;
    }

    void print()
    {
        User::print();
        cout << "Domestic user balance"
             << ":" << dUserBalance << endl;
        cout << "Units"
             << ":" << unit << endl;
    }
};

class CommercialUser : public User
{
public:
    float cUserBalance;
    int unit;
    float amt;

    CommercialUser() : User(), cUserBalance(0), unit(0) {}
    CommercialUser(int id, string n, string type, float cub, int u) : User(id, n, type), cUserBalance(cub), unit(u) {}

    void pay(int units)
    {
        if (units*costPerUnit > cUserBalance)
            throw("Insufficient balance");
        amt = units*costPerUnit;
        cUserBalance -= amt;
    }

    void print()
    {
        User::print();
        cout << "Domestic user balance"
             << ":" << cUserBalance << endl;
        cout << "Units"
             << ":" << unit << endl;
    }
};

class price
{
public:
    float total;
    User *p[];

    void calc(User *p[])
    {
        for (int i = 0; i < 4; i++)
        {
            total += p[i]->amount;
        }
        cout << "Total price : " << total << endl;
    }
};
int main();
class member : public User
{
private:
    string username;
    string password;

public:
    void login()
    {
        int count;
        string uname, password, pass;
        system("cls");
        cout << "Username: ";
        cin >> uname;
        cout << "Password: ";
        cin >> password;
        ifstream input("records.txt");
        while (input >> uname >> pass >> id >> useType)
        {
            if (pass == password)
            {
                count = 1;
                system("cls");
                break;
            }
        }
        input.close();
        if (count == 1)
        {
            cout << "Welcome " << uname << endl
                 << "You were the most avaited\n";
            cout << "id: " << id << endl
                 << "name: " << name << endl
                 << "usetype: " << useType << endl;
        }
        else
        {
            cout << "Error\n";
            cin >> never_used;
            system("cls");
            if (never_used == 1)
                main();
        }
    }

    void registration()
    {
        string newname, newpass, npass;
        system("cls");
        cout << "Username: ";
        cin >> newname;
        cout << "Password: ";
        cin >> newpass;
        cout << "Re Enter Password: ";
        cin >> npass;

        if (newpass == npass)
        {
            ofstream fp("records.txt", ios::app);
            fp << newname << "  " << newpass << endl;
            system("cls");
            cout << "Registration success\n";
            main();
        }
        else
        {
            cout << "\t\tPasswords won't match\n\t\tPress any number to continue\n";
            cin >> never_used;

            registration();
        }
    }
};

int main()
{
    member m;
    m.login();
    int n;
    User *u[20];
    Admin *obj1 = obj1->getInstance();
    obj1->id = 1;
    obj1->name = "Admin1";
    obj1->useType = "admin";
    obj1->updateCpu(100);
    Employee obj2(2, "Shreyas", "employee");
    Employee obj5(5, "Darshan", "employee");
    Employee obj20(7, "Sameer", "employee");
    Employee obj21(9, "Pratham", "employee");

    vector<Employee>v;
    cout<<"Enter how many employees"<<endl;
    cin>>n;
    Employee e;
    for(int i=0;i<n;i++)
    {
        e.getinput();
        v.push_back(e);
    }
    vector<int>v1;
    /*std::vector<Employee>::v  iter;
  const std::vector<Employee>::v end_iter = v.end();*/
    for (auto iter = v.begin(); iter != v.end(); ++iter)
  {
    cout << (*iter) << "\n";
  }
    DomesticUser obj3(3, "Amit", "user", 10000, 5);
    DomesticUser obj6(10, "Varun", "user", 30000, 5);
    DomesticUser obj7(11, "Sumit", "user", 20000, 5);
    DomesticUser obj8(12, "Swatik", "user", 15000, 5);
    DomesticUser obj9(13, "Prithvi", "user", 27000, 5);
    DomesticUser obj10(14, "Adwait", "user", 33000, 5);

    CommercialUser obj4(4, "Santosh", "user", 40000, 10);
    CommercialUser obj11(15, "Manjunath", "user", 23000, 10);
    CommercialUser obj12(16, "Ankit", "user", 26500, 10);
    CommercialUser obj13(17, "Sanket", "user", 24500, 10);
    CommercialUser obj14(18, "Apeksha", "user", 19000, 10);

    EBMS E("Electric Bill Management System");
    E.printdetails();

    cout << endl
         << endl;

    u[0] = obj1;
    u[1] = &obj2;
    u[2] = &obj3;
    u[3] = &obj4;
    u[4] = &obj5;
    u[5] = &obj6;
    u[6] = &obj7;
    u[7] = &obj8;
    u[8] = &obj9;
    u[9] = &obj10;
    u[10] = &obj11;
    u[11] = &obj12;
    u[12] = &obj13;
    u[13] = &obj14;
    u[14] = &obj20;
    u[15] = &obj21;

    for (int i = 0; i < 16; i++)
    {
        u[i]->print();
        cout << endl;
    }

    try
    {
        obj3.pay(1000);
        obj4.pay(2000);
    }
    catch (InsufficientBalance &sb)
    {
        sb.show();
    }

    price p;
    p.calc(u);

    cout << "-------------- After payment ----------------" << endl
         << endl;

    for (int i = 0; i < 16; i++)
    {
        u[i]->print();
        cout << endl;
    }
    //obj1->removeemployee();
    //cin >> never_used;

    return 0;
}
