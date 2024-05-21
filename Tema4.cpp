// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Ex3: Introdu un caracter pentru a afla daca este consoana/vocala: ";
    char h;
    cin >> h;
    if (h == 'a', 'e', 'i', 'o', 'u') {
        cout << "characterul introdus este o vocala" << endl;
    }
    else if (h == 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'r', 's', 't', 'v', 'w', 'x', 'z') {
        cout << "caracterul introdus este o consoana" << endl;
    }
    cout << "Ex4: Introdu o luna ca numar de la 1-12: ";
    int a;
    cin >> a;
    if (a <= 2 || a == 12 && a > 0) {
        cout << "Anotimpul este Iarna";
    }
    else if (a <= 5 && a >= 3) {
        cout << "Anotimpul este primavara";
    }
    else if (a <= 8 && a >= 6) {
        cout << "Anotimpul este vara";
    }
    else if (a <= 11 && a >= 9) {
        cout << "Anotimpul este toamna";
    }
    else if (a <= 0 || a > 12) {
        cout << "Numarul este prea mare sau prea mic";
    }
    return 0;
}