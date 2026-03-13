//a) Es wird wieder nur eine Kopie des Wertes y übergeben weil keine Adressen -> CallByValue

#include <iostream>
using namespace std;

void swapit(int &x, int &y) {
    int temp = x; // Wert von x zwischenspeichern
    x = y;        // y in x schreiben
    y = temp;     // den alten Wert von x (aus temp) in y schreiben
}


int main(void)
{

    int a = 15;
    int b = 22;
    cout << a << ", " << b << endl;
    swapit(a, b);
    cout << a << ", " << b << endl;
    return 0;
}
