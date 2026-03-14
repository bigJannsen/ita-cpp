#include <iostream>
using namespace std;

class tageszeittyp {
private:
    unsigned char std;
    unsigned char min;
    unsigned char sek;

public:
    // Getter
    unsigned char get_std(void) {
        return std;
    }

    unsigned char get_min(void) {
        return min;
    }

    unsigned char get_sek(void) {
        return sek;
    }

    // Setter
    void set_std(unsigned char neu_std) {
        std = neu_std;
    }

    void set_min(unsigned char neu_min) {
        min = neu_min;
    }

    void set_sek(unsigned char neu_sek) {
        sek = neu_sek;
    }

    // Initialisierung
    void init(void) {
        std = 12;
        min = 0;
        sek = 0;
    }

    void init(unsigned char stunde) {
        std = stunde;
        min = 0;
        sek = 0;
    }

    // Prüfung auf gültige Uhrzeit
    bool is_ok(void) {
        if (std > 23) return false;
        if (min > 59) return false;
        if (sek > 59) return false;
        return true;
    }

    // Beispielmethoden damit die Funktionalität erhalten bleibt
    void eingeben(void) {
        int s, m, k;
        cout << "Stunde eingeben: ";
        cin >> s;
        cout << "Minute eingeben: ";
        cin >> m;
        cout << "Sekunde eingeben: ";
        cin >> k;

        std = (unsigned char)s;
        min = (unsigned char)m;
        sek = (unsigned char)k;
    }

    void ausgeben(void) {
        cout << (int)std << ":";
        if (min < 10) cout << "0";
        cout << (int)min << ":";
        if (sek < 10) cout << "0";
        cout << (int)sek;
    }
};

int main() {

    tageszeittyp t1, t2, t3;

    //t1.eingeben();
    t1.init();
    cout << "t1 = ";
    t1.ausgeben();
    cout << "  -> gültig: " << t1.is_ok() << endl;

    t2.init(19);
    cout << "t2 = ";
    t2.ausgeben();
    cout << "  -> gültig: " << t2.is_ok() << endl;

    t3.set_std(25);
    t3.set_min(10);
    t3.set_sek(5);

    cout << "t3 = ";
    t3.ausgeben();
    cout << "  -> gültig: " << t3.is_ok() << endl;

    return 0;
}
