#include <iostream>
using namespace std;

struct datum {

private:

    int tag;
    int monat;
    int jahr;

    bool is_schaltjahr() {
        return (jahr % 4 == 0 && jahr % 100 != 0) || (jahr % 400 == 0);
    }
    int anzahl_tage() {
        switch (monat) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31;
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            case 2:
                return is_schaltjahr() ? 29 : 28;
            default:
                return 0;
        };
    };
public:


    void init(int t, int m, int j) {
        tag = t;
        monat = m;
        jahr = j;
    }

    void display() {

        cout << tag << "." << monat << "." << jahr << endl;
    };
    void tag_vor() {
        tag++;

        if (tag > anzahl_tage()) {
            tag = 1;
            monat++;

            if (monat > 12) {
                monat = 1;
                jahr++;
            }
        }
    }

    void tag_zurueck() {
        tag--;

        if (tag == 0) {
            tag = anzahl_tage();
            monat--;

            if (monat == 0) {
                monat = 12;
                jahr--;
            }
        }
    }
// checkt intern die schaltjahrfunktion aus weil die privat ist
    void check_schaltjahr() {
        if (is_schaltjahr()) cout << "Ist ein Schaltjahr" << endl;
        else cout << "Kein Schaltjahr" << endl;
    }


};


int main() {

    datum test;

    // Richtig: Über init setzen (oder über eine neue public scan-Methode)
    test.init(13, 3, 2026);

    test.display();
    test.check_schaltjahr(); // Ruft intern die private Methode auf

    return 0;

}
