//a) Es wird wieder nur eine Kopie des Wertes y übergeben weil keine Adressen -> CallByValue
//b) makemax(&a, &b);

#include <iostream>
using namespace std;

void makemax(int& a, int& b) {

    if(a<b) {
        a=b;
    } else {
        b=a;
    }
}


int main(void)
{
    int a, b;
    cout << "Bitte a eingeben: "; cin >> a;
    cout << "Bitte b eingeben: "; cin >> b;
    cout << "rufe makemax(a, b) auf..." << endl;

    makemax(a, b);

    cout << "Wert fuer a: " << a << endl;
    cout << "Wert fuer b: " << b << endl;

    return 0;
}