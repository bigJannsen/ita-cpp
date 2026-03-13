#include <iostream>
using namespace std;

double neg(double x) {
    if(x<0) {
        return -x;
    } else {
        return x;
    }
}

unsigned long neg1(long x) {

    if(x<0) {
        return -x;
    } else {
        return x;
    }
}

int main() {

    cout << neg(-15) << endl;
    cout << neg1(54) << endl;

    return 0;
}
