#include <iostream>
using namespace std;

void afisare(int x[], int y[], int n, int m) {
    cout << "Array x: ";
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    cout << "Array y: ";
    for (int z = 0; z < m; z++) {
        cout << y[z] << " ";
    }
    cout << endl;
}
//Exercitiul 10
int comparare(int x[], int y[], int n, int m)
{
    int a;
    int b;
    if (n != m) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        a = x[i];
        b = y[i];
        if (a != b) {
            return 0;
        }
    }
    return 0;
}
//Exercitiul 11
void gasire(int x[], int y[], int n, int m) {
    int z[20];
    int p = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (x[i] == y[j]) {
                z[p] = x[i];
                p += 1;
            }
        }
    }
    for (int k = 0; k < p; k++) {
        cout << z[k] << " ";
    }
    cout << "\n" << endl;
}
//Exercitiul 12
void eliminare(int x[], int n) {
    int a;
    cout << "Introdu numarul ce doresti sa-l elimini: ";
    cin >> a;
    int i = 0;
    bool gasit = false;

    while (i < n) {
        if (x[i] == a) {
            gasit = true;
            for (int j = i; j < n - 1; j++) {
                x[j] = x[j + 1];
            }
            n--;
        }
        else {
            i++;
        }
    }

    if (!gasit) {
        cout << "Numarul n-a fost gasit" << endl;
        return;
    }
    else if (gasit) {
        for (int i = 0; i < n; i++) {
            cout << x[i] << " ";
        }
        cout << endl;
    }
}

//Exercitiul 13
int aritmetica(int x[], int n)
{
    int sum = 0;
    float medie;
    int d;
    int e;
    int f = 0;
    for (int i = 0; i < n; i++) {
        d = x[i];
        sum += d;
    }
    medie = sum / n;
    cout << endl;
    cout << "Media Aritmetica al array-ului X este: " << medie << endl;
    for (int y = 0; y < n; y++) {
        e = x[y];
        if (e > medie) {
            ++f;
        }
    }
    cout << "Exista " << f << " numere mai mari decat media aritmetica al Array-ului X.\n";
    cout << endl;
    return 0;
}
//Exercitiul 14 
void distinct(int x[], int y[], int n, int m) {
    int z[100];
    for (int i = 0; i < n; i++)
    {
        z[i] = x[i];
    }
    for (int i = 0; i < m; i++)
    {
        z[i + n] = y[i];
    }
    cout << endl;
    cout << "Noul array distinct dintre x si y: ";
    for (int i = 0; i < n + m; i++) {
        int j; //declarat inafara functiei for pentru ca e folosit si in "if" mai jos.
        for (j = 0; j < i; j++) {
            if (z[i] == z[j])
                break;
        }
        if (i == j)
            cout << z[i] << " ";
    }
    cout << "\n" << endl;
}

//Exercitiul 15
void frecventa(int x[], int n) {
    bool numarare[100];
    for (int i = 0; i < n; i++) {
        numarare[i] = false; // Toate numerele sunt ne-numarate(false)
    }
    int u = 1;
    for (int i = 0; i < n; i++) { //Daca valoarea e deja numarata, ii face skip.
        if (numarare[i]) {
            continue;
        }
        int k = 1;
        for (int y = i + 1; y < n; y++) {
            if (x[i] == x[y]) {
                k++;
                numarare[y] = true; //valoarea e numarata.
                u++;
            }
        }
        if (k > 1) {
            cout << "Numarul " << x[i] << " apare " << k << " ori." << endl;
        }
    }
    if (u == 1) {
        cout << "Nici un numar cu frecventa." << endl;
    }
}
//Exericitul 16
void array3(int x[], int y[], int v[], int n, int m, int o) {
    cout << endl;
    cout << "Array V: ";
    for (int q = 0; q < o; q++) {
        cout << v[q] << " ";
    }
    cout << "\nElementele comune dintre cele 3 Array-uri: ";
    int z[30];
    int p = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (x[i] == y[j]) {
                for (int l = 0; l < o; l++) {
                    if (x[i] == v[l]) {
                        z[p] = x[i];
                        p += 1;
                    }
                }
            }
        }
    }
    for (int k = 0; k < p; k++) {
        cout << z[k] << " ";
    }
    cout << "\n" << endl;
}
//Exercitiul 17 -- la fel ca 15 dar o conditie in IF final in plus. Intrebare, pot apela void frecventa si sa adaug aici conditia F o/2?
void jumate(int v[], int o) {
    bool numarare[100];
    for (int i = 0; i < o; i++) {
        numarare[i] = false; // Toate numerele sunt ne-numarate(false)
    }
    for (int i = 0; i < o; i++) { //Daca valoarea e deja numarata, ii face skip.
        if (numarare[i]) {
            continue;
        }
        int k = 1;
        for (int y = i + 1; y < o; y++) {
            if (v[i] == v[y]) {
                k++;
                numarare[y] = true; //valoarea e numarata.
            }
        }
        if (k > o / 2 && k > 1) {
            cout << "Numarul " << v[i] << " apare " << k << " ori." << endl;
            cout << "Elementul " << v[i] << " este mai mare decat jumate/Array\n" << endl;
        }
    }
}

int main()
{
    int x[] = { 6,1,17,11,14,21 };
    int y[] = { 6,1,0,11,14,22,21 };
    int v[] = { 2,2,2,2,2,2,14,7,11,21 };
    int o = sizeof(v) / sizeof(v[0]);
    int n = sizeof(x) / sizeof(x[0]);
    int m = sizeof(y) / sizeof(y[0]);
    int tema;
    cout << "10. Compara 2 Array-uri\n11. Gaseste elemente comune dintre 2 Array - uri\n12. Scrieti un program care elimina toate aparitiile unui element specific dintr - un array.\n13. Numara cate elemente dintr - un array sunt mai mari decat media aritmetica a elementelor din array.\n14. Creeaza un array care contine toate elementele distincte din 2 array - uri.\n15. Gaseste elementele care apar cel mai frecvent intr - un array\n16. Gaseste elemente comune intre 3 array - uri.\n17. Gaseste elementele care apar de mai mult de jumate din lungimea array - ului." << endl;
    cout << "Array-urile sunt urmatoarele:" << endl;
    afisare(x, y, n, m);
    while (true) {
        cout << "Alege o tema(10 - 17) sau '0' pentru a iesii: ";
        cin >> tema;

        if (tema == 0) {
            break;
        }
        if (tema < 10 || tema > 17) {
            cout << "Reintrodu un numar\n";
            continue;
        }

        switch (tema) {
        case 10:
            if (comparare(x, y, n, m))
                cout << "Array-urile sunt identice\n" << endl;
            else
                cout << "Array-urile nu sunt identice\n" << endl;
            break;

        case 11:
            gasire(x, y, n, m);
            break;
        case 12:
            eliminare(x, n);
            break;
        case 13:
            aritmetica(x, n);
            break;
        case 14:
            distinct(x, y, n, m);
            break;
        case 15:
            frecventa(x, n);
            break;
        case 16:
            array3(x, y, v, n, m, o);
            break;
        case 17:
            cout << "\nSe va folosii Array-ul V: ";
            for (int i = 0; i < o; i++) {
                cout << v[i] << " ";
            }
            cout << endl;
            jumate(v, o);
            break;
        }
    }
}