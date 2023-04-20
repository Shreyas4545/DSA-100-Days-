#include <iostream>
#include <unistd.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
void login();

//Exception class to handle the error when the invalid parameter is entered
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

//Exception class to handle the error when the insufficient balance is entered
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

//User class
class User
{
public:
    int id;
    string name;
    string useType;
    float amount;
    string paymentStatus;
    string workingStatus;
    float moneyLeft;
    // float costPerUnit;

    User() : id(0), name(""), useType("") {}
    User(int id, string n, string type) : id(id), name(n), useType(type) {}

    //Function to print the user details
    virtual void print()
    {
        cout << "id"
             << ":" << id << endl
             << "name"
             << ":" << name << endl
             << "user type"
             << ":" << useType << endl;
    }

    //Funtion to compute the amount
    virtual void computeBalance()
    {
    }

    //Pay function which is reused by the different users to pay the bill
    virtual void pay(float amt)
    {
    }

    //Function to remove the employee
    virtual void removeEmployee(User *u[], string n) {}
};

//Singleton design pattern as we only need 1 instance of admin
class Admin : public User
{
    static Admin *instance;

    Admin() : User(), costPerUnit(0) {}

public:
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
        if (data < 0)
        {
            throw InvalidParameter("Invalid parameter please check.");
        }
        this->costPerUnit = data;
    }

    //Considering the user status function to remove the employee
    void removeEmployee(User *u[], string n)
    {
        for (int i = 0; i < 16; i++)
        {
            if (u[i]->useType == "employee")
            {
                if (n == u[i]->name)
                {
                    u[i]->workingStatus = "Removed";
                    cout << "Employee with id" << u[i]->id << " is removed" << endl;
                }
            }
        }
    }

    void print()
    {
        User::print();
        cout << "Cost Per Unit"
             << ":" << costPerUnit << endl;
    }
};

Admin *Admin::instance = 0;

//EBMS class
class EBMS
{
public:
    string name;
    User *u[];
    EBMS(string a)
    {
        name = a;
    }
    void printdetails()
    {
        cout << "Welcome to the " << name << " Electricity Bill Management System" << endl;
    }
};

//Employee class which inherits the user class
class Employee : public User
{
public:
    Employee() : User() {}
    Employee(int id, string n, string type) : User(id, n, type) {}

    void print()
    {
        if (workingStatus != "Removed")
        {
            User::print();
        }else{
            cout<<"Employee removed."<<endl;
        }
    }
};

//1st type of user(Domestic user)
class DomesticUser : public User
{
public:
    float dUserBalance;
    int unit;

    DomesticUser() : User(), dUserBalance(0), unit(0) {}
    DomesticUser(int id, string n, string type, float dub, int u) : User(id, n, type), dUserBalance(dub), unit(u) {}

    //Function which pays the amount decided by Domestic user
    void pay(float ammt)
    {
        int a=unit*ammt;
        if (a > dUserBalance)
        {
            throw InsufficientBalance("Insufficient balance");
        }
        amount = unit * ammt;
        dUserBalance -= unit * ammt;
        moneyLeft = dUserBalance;
        paymentStatus = "paid";
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

//2nd type of user(Commercial user)
class CommercialUser : public User
{
public:
    float cUserBalance;
    int unit;

    CommercialUser() : User(), cUserBalance(0), unit(0) {}
    CommercialUser(int id, string n, string type, float cub, int u) : User(id, n, type), cUserBalance(cub), unit(u) {}

    //Function which pays the amount decided by Commercial user
    void pay(float ammt)
    {
        if (unit * ammt > cUserBalance)
        {
            throw InsufficientBalance("Insufficient balance");

        }
        amount = unit * ammt;
        cUserBalance -= unit * ammt;
        moneyLeft = cUserBalance;
        paymentStatus = "paid";
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

//Class with function calc to calculate the total amount paid
class price
{
public:
    float total;

    price() : total(0) {}

    void calc(User *p[])
    {
        for (int i = 0; i < 16; i++)
        {
            if (p[i]->useType == "user" && p[i]->paymentStatus == "paid")
            {
                total += p[i]->amount;
            }
        }
    }
};

int main()
{
    User *u[20]; //Array of users

    //Single Instance of admin
    Admin *obj1 = obj1->getInstance();
    obj1->id = 1;
    obj1->name = "Babloo";
    obj1->useType = "admin";

    //Creating and adding the employees
    Employee obj2(2, "Shreyas", "employee");
    Employee obj5(5, "Darshan", "employee");
    Employee obj20(7, "Sameer", "employee");
    Employee obj21(9, "Pratham", "employee");

    DomesticUser obj3(3, "Amit", "user", 10000, 5);
    DomesticUser obj6(10, "Varun", "user", 30000, 5);
    DomesticUser obj7(11, "Sumit", "user", 20000, 5);
    DomesticUser obj8(12, "Swatik", "user", 15000, 5);
    DomesticUser obj9(13, "Prithvi", "user", 27, 5);
    DomesticUser obj10(14, "Adwait", "user", 33000, 5);

    CommercialUser obj4(4, "Santosh", "user", 40000, 10);
    CommercialUser obj11(15, "Manjunath", "user", 23000, 10);
    CommercialUser obj12(16, "Ankit", "user", 26500, 10);
    CommercialUser obj13(17, "Sanket", "user", 24500, 10);
    CommercialUser obj14(18, "Apeksha", "user", 19000, 10);

    cout << "-------------- Welcome ----------------" << endl;
    cout << endl
         << endl
         << endl;

    EBMS e("Electric Bill Management System");
    e.printdetails();

    price p;
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

    cout << endl;

    cout << "-------------- Login ----------------" << endl
         << endl;

    try
    {
        obj1->updateCpu(100);
    }
    catch (InvalidParameter &i)
    {
        cout << i.show() << endl;
    }

    cout << endl
         << endl;

    //Try block to identify any error and to process further functions
    do
    {
        //Login system
        int count = 0;
        string user, pass, us, pa;
        cout << "please enter the following details" << endl;
        cout << "USERNAME :";
        cin >> user;
        cout << "PASSWORD :";
        cin >> pass;

        ifstream input("database1.txt");
        getline(input, us);
        getline(input, pa);
        while (input >> us && input >> pa)
        {
            if (us == user)
            {
                if (pa == pass)
                {
                    count = 1;
                    system("clear");
                }
            }
        }
        input.close();
        int key;
        if (count == 1)
        {
            cout << "\nHello " << user << endl
                 << "Thanks for logging in.." << endl
                 << endl;
            for (int i = 0; i < 16; i++)
            {
                if (u[i]->name == user && u[i]->useType == "user")
                {
                    cout << "----------------------------------------" << endl;
                    cout << "Press 1 to view user details" << endl;
                    cout << "Press 2 to pay the bill" << endl;
                    cout << "Press 4 to exit" << endl;
                    cout << "----------------------------------------" << endl;
                    cin >> key;
                    switch (key)
                    {
                    case 1:
                        u[i]->print();
                        break;

                    case 2:
                        try
                        {
                            u[i]->pay(obj1->costPerUnit);
                            p.calc(u);
                            cout << "paid" << endl;
                            cout << "remaining balance : " << u[i]->moneyLeft << endl;
                            cout << endl
                                 << endl;
                            cout << "press any key to log out.";
                        }
                        catch (InsufficientBalance &sb)
                        {
                           cout<<sb.show()<<endl;
                        }
                        break;

                    default:
                        break;
                    }
                }
                else if (u[i]->name == user && u[i]->useType == "admin")
                {
                    int key;
                    string name;
                    cout << "Enter 1 to print admin details" << endl;
                    cout << "Enter 2 to remove an employee" << endl;
                    cout << "Enter 3 to calculate total revenue generated" << endl;
                    cout << "Enter 10 to log out" << endl;
                    cin >> key;
                    switch (key)
                    {
                    case 1:
                        u[i]->print();
                        break;

                    case 2:
                        cout << "Enter name of the employee to remove" << endl;
                        cin >> name;
                        u[i]->removeEmployee(u, name);
                        cout<<endl;
                        cout << "Press 1 to print final employee details" << endl;
                        cout << "Press 4 to exit" << endl;
                        int flag;
                        cin >> flag;
                        switch (flag)
                        {
                        case 1:
                            for (int i = 0; i < 16; i++)
                            {
                                if (u[i]->workingStatus != "Removed" && u[i]->useType == "employee")
                                {
                                    u[i]->print();
                                    cout << endl;
                                }
                            }
                            break;

                        case 2:
                            exit(-1);
                            break;

                        default:
                            break;
                        }
                        break;

                    case 3:
                        cout << "Total Amount generated " << p.total << endl;
                        break;

                    case 10:
                        exit(-1);
                        break;

                    default:
                        break;
                    }
                }
                else if (u[i]->name == user && u[i]->useType == "employee")
                {
                    int key;
                    cout << "Enter 1 to print employee details" << endl;
                    cout << "Enter 2 to print user details" << endl;
                    cout << "Enter 3 to log out" << endl;
                    cin >> key;
                    switch (key)
                    {
                    case 1:
                        u[i]->print();
                        break;

                    case 2:
                        for (int i = 0; i < 16; i++)
                        {
                            if (u[i]->useType == "user")
                            {
                                u[i]->print();
                                cout << endl;
                            }
                        }
                        break;

                    case 3:
                        exit(-1);
                        break;

                    default:
                        break;
                    }
                }
            }
            cin.get();
            cin.get();
        }
        else
        {
            cout << "\nLOGIN ERROR\nPlease check your username and password\n";
        }
    } while (1);

    return 0;
}
