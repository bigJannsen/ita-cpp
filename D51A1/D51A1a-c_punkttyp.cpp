//a: float reicht, es wurde keine Nachkommastelle über 5 genannt

#include <iostream>
using namespace std;

struct punkttyp {
    float x;
    float y;
    void print(void) {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
    void scan(void) {
        cout << "Wert für x: ";
        cin >> x;
        cout << "Wert für y: ";
        cin >> y;

    }
};

int main() {

    struct punkttyp test; // IDE meckert test wegen fehlenden {} an :(

    test.scan();
    test.print();

    return 0;
}


