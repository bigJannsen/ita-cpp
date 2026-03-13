/*
 * a) Funktionsüberladung (Overloading): Erlaubt die Verwendung des gleichen Funktionsnamens
 *    für unterschiedliche Datentypen (der Compiler wählt die passende Version).
 *
 * b) Referenzen (Call-by-Reference): Durch die Verwendung von Referenzparametern (z.B. int &x)
 *    arbeitet die Funktion direkt auf dem Original, ohne dass beim Aufruf ein '&' nötig ist.
 */
#include <iostream>
using namespace std;


void read(int& x) {
    cout << "Bitte einen Integer eingeben: ";
    cin >> x;
}

void read(double& x) {
    cout << "Bitte einen Double eingeben: ";
    cin >> x;
}

int main(void)
{

    int ri;
    double rd;
    read(ri);
    read(rd);
    cout << ri << ", " << rd << endl;
}