#include <iostream>
using namespace std;

struct tageszeittyp {
    unsigned char std;
    unsigned char min;
    unsigned char sek;

    void print(void) {
        cout << (int) std << ":" << (int) min << ":" << (int) sek << endl;
    }

    void scan() {
        cout << "Gebe Stunde, Minute und Sekunde getrennt mit Enter in Ganzzahl an" << endl;

        int stunde, minute, sekunde;

        do {
            cin >> stunde >> minute >> sekunde;

            if (stunde < 0 || stunde > 23 || minute < 0 || minute > 59 || sekunde < 0 || sekunde > 59) {
                cout << "Ungueltige Zeit! Bitte erneut eingeben:" << endl;
            }

        } while (stunde < 0 || stunde > 23 || minute < 0 || minute > 59 || sekunde < 0 || sekunde > 59);

        std = stunde;
        min = minute;
        sek = sekunde;
    }
};
int main() {

    struct tageszeittyp nacht;

    nacht.scan();
    nacht.std += 1;

    if(nacht.std ==24) {
        nacht.std = 0;
    }

    nacht.print();

    return 0;
}
