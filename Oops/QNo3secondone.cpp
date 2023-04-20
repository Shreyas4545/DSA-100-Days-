#include<iostream>
#include<math.h>
using namespace std;

class Shape {
    public:
        double a;
        double b;
        double c;
        double d;

    void getSides() {
        cout << "Enter 4 sides of the quadrilateral you want to identify: " << endl;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
    }

    void perimeter() {
        int perimeter = a+b+c+d;
        cout << "Perimeter = " << perimeter << endl;
    }

    string identifyQuadrilateral() {
        if(a==b && b==c && c==d ) {
            cout << "This is a Square" << endl;
            return "square";
        }
        else if (a==c && b==d) {
            cout << "This is a Rectangle" << endl;
            return "rectangle";
        }
        else {
            return "Cannot identify!";
        }
    }

    double area() {
        double area;
        if(this->identifyQuadrilateral() == "square") {
            area = a*a;
            return area;
        }
        else if(this->identifyQuadrilateral() == "rectangle") {
            area = a*b;
            return area;
        }
    }

    double diagonal() {
        double diagonal;
        if(this->identifyQuadrilateral() == "square") {
            diagonal = sqrt((a*a) + (a*a));
            return diagonal;
        }
        else if (this->identifyQuadrilateral() == "rectangle")
        {
            diagonal = sqrt((a*a) + (b*b));
            return diagonal;
        }
    }
};

int main() {
    Shape S1;
    S1.getSides();

    string quadName = S1.identifyQuadrilateral();
    cout << "Quadrilateral: " << quadName << endl;

    S1.perimeter();

    double quadArea = S1.area();
    cout << "Area: " << quadArea << endl;

    double quadDiagonal = S1.diagonal();
    cout << "Diagonal: " << quadDiagonal << endl;

    return 0;

}
