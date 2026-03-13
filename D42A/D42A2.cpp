#include <iostream>
#include <cmath>
using namespace std;

double polynom(double x, double a=0.0, double b=0.0, double c=0.0, double d=0.0, double e=0.0, double f=0.0);


int main() {

    double erg;

    erg = polynom(7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0);
    cout << polynom(7.0, 6.0) << endl;
    cout << polynom(7.0, 6.0, 5.0) << endl;
    cout << polynom(7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0) << endl;
    return 0;
}

double polynom(double x, double a, double b, double c, double d, double e, double f) {

    double y;

    y = a+b*x + c*(x*x) + d*(x*x*x) + e*(x*x*x*x) + e*(x*x*x*x*x);
    return y;
}