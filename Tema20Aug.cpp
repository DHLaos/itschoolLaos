#include <iostream>
#include <memory>
using namespace std;

class Persoana {
private:
    string nume;
    int varsta;
public:
    Persoana(string n, int v) :nume(n), varsta(v) {
        this->nume = n;
        this->varsta = v;
    }
    void afiseaza() {
        cout << "Numele: " << nume << "| Varsta: " << varsta << endl;
    }
};
int main()
{
    unique_ptr<Persoana> p(new Persoana("Daniel", 28));
    p->afiseaza(); //Tema Ex1.

    cout << endl;
    cout << "Exercitiul 2:" << endl;
    unique_ptr<Persoana> q = move(p); //Exercitiul 2
    p.reset(new Persoana("Vlad", 22));
    q->afiseaza();
    p->afiseaza();

    //Exercitiul 3
    cout << "\nExercitiul 3:\n";
    shared_ptr<double> dp = make_shared<double>(77);
    cout << "First shared p: " << * dp << endl;
    shared_ptr<double> dp2 = dp;
    shared_ptr<double> dp3 = dp;
    shared_ptr<double> dp4 = dp;
    shared_ptr<double> dp5 = dp;
    cout << "Use count = " << dp.use_count();
}