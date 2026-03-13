#include <iostream>
using namespace std;


double induktivitaet(double y0, double Aq, double n, double lm, double yr = 1.0) {
    // L=(N*N)*((y0*yr*Aq)/lm)
    double l = (n*n)*((y0*yr*Aq)/lm);
    return l;
}

int main() {

    cout << induktivitaet(0.98, 4, 22.5, 15.44581) << endl;
    return 0;
}
