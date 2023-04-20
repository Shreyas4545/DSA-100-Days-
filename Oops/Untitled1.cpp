#include<bits/stdc++.h>
#include<Windows.h>
#include<unistd.h>
#include<fstream>
using namespace std;
int main();
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

    virtual void computeBalance()
    {
    }

    virtual void pay()
    {
    }
};

class member:public User
{
private:
    string username;
    string password;
public:
void login()
{
    int count;
    string uname, password, username, pass;
    system("cls");
    cout << "Username: ";
    cin >> uname;
    cout << "Password: ";
    cin >> password;
    ifstream input("records.txt");
    while (input >> username >> pass >> id >> name >> useType)
    {
        if(username==uname && pass==password)
        {
            count = 1;
            system("cls");
            break;
        }
    }
    input.close();
    if(count==1)
    {
        cout << "Welcome "<< uname<<endl<<"You were the most avaited\n";
           cout << "id: " <<id<< endl
                 << "name: " << name<< endl
                 << "usetype: " << useType<< endl;
    }
    else
    {
        cout << "Error\n";
        cin>>never_used;
        system("cls");
        if(never_used==1)
         main();
    }
}

void registration()
{
    string newname, newpass,npass;
    system("cls");
    cout << "Username: ";
    cin >> newname;
    cout << "Password: ";
    cin >> newpass;
    cout << "Re Enter Password: ";
    cin >> npass;

    if(newpass==npass)
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
class Admin : public User
{
public:
    float adminBalance;
    float costPerUnit;

    Admin() : User(), adminBalance(0) {}
    Admin(int id, string n, string type, float bal) : User(id, n, type), adminBalance(bal) {}

    void updateCPU(float amt)
    {
        costPerUnit = amt;
    }


    void print()
    {
        User::print();
        cout << "Cost Per Unit"
             << ":" << costPerUnit << endl;
        cout << "Admin balance"
             << ":" << adminBalance << endl;
    }
};

class EBMS
{
public:
    string name;
    Admin *admin;
    EBMS(string a)
    {
        name = a;
    }
    void printdetails()
    {
        cout << "Welcome to the " << name << " Electricity Bill Management System" << endl;
        admin->print();
    }
};

class Employee : public User
{
public:
    float empBalance;

    Employee() : User(), empBalance(0) {}
    Employee(int id, string n, string type, float ebal) : User(id, n, type), empBalance(ebal) {}

    void print()
    {
        User::print();
        cout << "Employee balance"
             << ":" << empBalance << endl;
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

    CommercialUser() : User(), cUserBalance(0), unit(0) {}
    CommercialUser(int id, string n, string type, float cub, int u) : User(id, n, type), cUserBalance(cub), unit(u) {}

    void pay(float amt)
    {
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

int main()
{
    User *u[4];
    Admin obj1(1,"Admin1", "admin", 10000);
    Employee obj2(2,"Emp1", "employee", 5000);
    DomesticUser obj3(3,"Domestic", "user", 10000, 5);
    CommercialUser obj4(4,"Commercial", "user", 40000, 10);

    EBMS("ABC");

    u[0] = &obj1;
    u[1] = &obj2;
    u[2] = &obj3;
    u[3] = &obj4;
    member m;
    m.login();
    cin>>never_used;
    for (int i = 0; i < 4; i++)
    {
        u[i]->print();
    }
    m.registration();
    return 0;
}

