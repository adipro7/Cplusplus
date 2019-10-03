#include <bits/stdc++.h>
using namespace std;

double basic(double b, double h) {
    return b*h/2.0;
}

double herons_formula(double a, double b, double c) {
    double s = (a + b + c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

double trigonometric_approach(double a, double b, double angle) {
    double theta = angle * 3.142 / 180;
    return a*b*sin(theta)/2;
}

int main() {
    int select;
    double base, height;
    double a, b, c;
    double angle;
    cout <<"Triangle Area is Calculated:\n1-Using Basic Formula\n2-herons Formula\n3-Trigonometric Approach(other formula)\n" ;
    cin >> select;
	switch(select) {
        case 1:
            cout << "Using Basic Formula:\n";
            cout<<"Base:";
            cin >> base;
			cout << "Height:";
            cin >> height;
			cout << "Area of Triangle="<< basic(base, height);
            break;
        case 2:
            cout << "Using Heron's Formula:\n"; 
			cout<< " Sides:\n";
            cin >> a >> b >> c;
			cout << "Area of Triangle="<< herons_formula(a, b, c);
            break;
        case 3:
            cout << "Using Trigonometric Approach:\n";
            cout<<"two adjacent sides:\n";
            cin >> a >> b;
        	cout << "angle between them (in degrees): ";
            cin >> angle;
            cout << "Area of Triangle="<< trigonometric_approach(a, b, angle);
            break;
        default:
            cout << "Wrong Choice!";
            break;
    }
} 
