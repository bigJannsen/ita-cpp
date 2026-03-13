#include <iostream>
using namespace std;

void write(int i) {
    cout << i << endl;
};
void write(double x) {
    cout << (double)x << endl;
};
void write(const char *s) {

    if(s != nullptr) {
        cout << s << endl;
    }
};
void write(const char *t[]) {
    int i = 0;
    while (t[i] != nullptr) { // Solange der Zeiger nicht NULL ist
        std::cout << t[i] << " ";
        i++;
    }
    std::cout << '\n'; // Zeilenumbruch nach dem gesamten Array
}

int main() {

    const char* test[] = {"eins", "zwei", nullptr};

    write(15);
    write(45.4);
    write("test");
    write(test);
    return 0;
}
