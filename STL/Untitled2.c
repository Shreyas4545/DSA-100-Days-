#include<iostream>

using namespace std;

    namespace mySpace1{

    int a;

    void printA(){

    cout<<"a="<<a<<endl;

    }

    }

    namespace mySpace2{

    int a;

    void printA(){

    cout<<"a="<<a<<endl;

    }

    }

int main()

{

    mySpace1::a=10;

    mySpace1::printA();

    mySpace2::a=10;

    mySpace2::printA();



    return 0;

}
