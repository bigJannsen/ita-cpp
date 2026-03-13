//a: float reicht, es wurde keine Nachkommastelle über 5 genannt

#include <iostream>
using namespace std;

struct punkttyp {
private:

    float x;
    float y;



public:
    void print(void) {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }/*
    void scan(void) {
        cout << "Wert für x: ";
        cin >> x;
        cout << "Wert für y: ";
        cin >> y;
    }*/

    void init() {
        x = 0.0;
        y = 0.0;
    }
    // -------- get --------
    double get_x(void) {
        return x;
    }
    double get_y(void) {
        return y;
    }
    // -------- set --------
    void set_x(double neu_x) {
        x = neu_x;
    }
    void set_y(double neu_y) {
        y = neu_y;
    }
};

int main() {

    struct punkttyp test; // IDE meckert test wegen fehlenden {} an :(

    test.set_x(32.3);
    test.set_y(4.5);

    double xx = test.get_x();
    double yy = test.get_y();

    cout << xx << ", " << yy << endl;

    test.print();

    return 0;
}


