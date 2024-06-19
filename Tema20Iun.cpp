#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


typedef struct produs {
    string denumire;
    string codprod;
    int cantitate;
    float pret;

    void afisare() const
    {
        cout << "Nume produs : " << denumire << " | Cod.Produs: " << codprod << " | Cantitate: " << cantitate << " | Pret(lei): " << pret << endl;
    }

    static void cauta(const vector<produs>& produse, const string& nume)
    {
        bool found = false;
        for (int i = 0; i < produse.size(); i++)
        {
            if (nume == produse[i].denumire) {
                produse[i].afisare();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Produs Inexistent." << endl;
        }
    }

    static void valoare(const vector<produs>& produse)
    {
        for (int i = 0; i < produse.size(); i++)
        {
            cout << "Valoarea produsului " << produse[i].denumire << " este: " << produse[i].cantitate * produse[i].pret << endl;
        }
    }

    static void stergereProd(vector<produs>& produse, const string& stergere)
    {
        bool found = false;
        for (int i = 0; i < produse.size(); i++)
        {
            if (stergere == produse[i].codprod) {
                found = true;
                produse.erase(produse.begin() + i);
            }
            cout << "\n" << endl;
            produse[i].afisare();
        }
        if (!found) {
            cout << "Produs Inexistent." << endl;
        }

    }
};

bool comparare(const produs& a, const produs& b) {
    return a.pret < b.pret;
}

int main() {
    int nr_produse;
    cout << "Cate produse introduceti? ";
    cin >> nr_produse;
    vector<produs> produse(nr_produse);
    int i;
    for (i = 0; i < nr_produse; ++i) {
        string denumire, codprod;
        int cantitate;
        float pret;
        cout << endl;
        cout << "Dati detaliile produsului " << i << ":" << endl;
        cout << "Nume Produs: ";
        cin >> denumire;
        cout << "Cod Produs: ";
        cin >> codprod;
        cout << "Cantitate: ";
        cin >> cantitate;
        cout << "Pret: ";
        cin >> pret;
        produse[i].denumire = denumire;
        produse[i].codprod = codprod;
        produse[i].cantitate = cantitate;
        produse[i].pret = pret;
    }
    cout << endl;
    cout << "Produsele adaugate sunt: " << endl;
    for (int i = 0; i < 1; i++)
    {
        produse[i].afisare();
    }
    produse.push_back({ "Laptop", "C1", 5, 10999.99 });
    produse.push_back({ "Samsung S24", "C2", 3, 6500.99 });
    produse.push_back({ "Iphone 14", "C3", 2, 8999.99 });
    produse.push_back({ "Logitech G703", "C4", 10, 350 });
    produse.push_back({ "Logitech G Pro X2", "C5", 5, 1100 });
    cout << endl;
    cout << "Lista tuturor produselor in ordinea pretului crescator: " << endl;
    std::sort(produse.begin(), produse.end(), comparare);
    for (int i = 0; i < produse.size(); i++)
    {
        produse[i].afisare();
    }
    string nume;
    cout << "Ce produs doriti sa gasiti? ";
    cin >> nume;
    produs::cauta(produse, nume);

    cout << "\n" << endl;
    produs::valoare(produse);
    /*for (int i = 0; i < produse.size(); i++)
    {
        cout << "Valoarea produsului " << produse[i].denumire << " este: " << produse[i].cantitate * produse[i].pret << endl;
    }*/

    string stergere;
    cout << "Ce produs doriti sa stergeti(Cod Produs)? ";
    cin >> stergere;
    cout << endl;
    produs::stergereProd(produse, stergere);
}