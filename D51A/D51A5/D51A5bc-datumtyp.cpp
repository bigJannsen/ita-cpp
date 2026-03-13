#include <iostream>
using namespace std;

struct datum {
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
};


int main() {

    struct datum test;

    cout << "Bitte Tag Monat und Jahr mit Eingabe getrennt eingeben (keine Ungültigen Werte!!!!!!)" << endl;
    cin >> test.tag;
    cin >> test.monat;
    cin >> test.jahr;

    test.display();

    if(test.is_schaltjahr())  {
        cout << "Jau, issn Schaltjahr" << endl; // erscheint bei 2028
    } else { cout << "Keen Schaltjahr..." << endl; }

    cout << "Der Monat hat " << test.anzahl_tage() << "Tage..." << endl;

    test.tag_vor();
    test.display();

    test.tag_zurueck();
    test.display();

    return 0;
}
