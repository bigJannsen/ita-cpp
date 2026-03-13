//a) Es wird nur eine Kopie des Wertes y übergeben, der echte wird nicht überschrieben.
//b) setze_auf_null(&y);

#include <iostream>
using namespace std;

void setzenull(double& y) {
    y = 0;
}

int main() {

    double x = 3;

    cout << x << endl;
    setzenull(x);
    cout << x << endl;

    return 0;
}
