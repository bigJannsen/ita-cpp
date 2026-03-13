#include <iostream>
using namespace std;

struct ztartikeltyp {

    char name[80];
    int jahrg;
    int ausgabe;
    int seitennr;
    int seitenzahl;
    char headliner[80];
    char autor[80];
    char schlagworte[80];

    // Funktionen (Methoden)
    void print(int x) {
        cout << x << endl;
    }
    void print(char y[80]) {
        cout << y << endl;
    }
    void scan(int &z) {
        cin >> z;
    }
    void scan(char zs[80]) {

        // für Leertasten ignorieren - cin kann nur einzelne Wörter,
        // bei " " bricht er ab
        if (cin.peek() == '\n') cin.ignore();
        cin.getline(zs, 80);
    }
};

int main(void)
{
    ztartikeltyp news;

    cout << "Artikel anlegen:" << endl;
    cout << "Oben in der Reihenfolge eingeben!" << endl;
    news.scan(news.name);
    news.scan(news.jahrg);
    news.scan(news.ausgabe);
    news.scan(news.seitennr);
    news.scan(news.seitenzahl);
    news.scan(news.headliner);
    news.scan(news.autor);
    news.scan(news.schlagworte);

    cout << "\nGespeicherte Artikeldaten:" << endl;
    news.print(news.name);
    news.print(news.jahrg);
    news.print(news.ausgabe);
    news.print(news.seitennr);
    news.print(news.seitenzahl);
    news.print(news.headliner);
    news.print(news.autor);
    news.print(news.schlagworte);
}
