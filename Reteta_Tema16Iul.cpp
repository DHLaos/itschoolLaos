#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class Recipe
{
private:
    string nume, ingrediente, instructiuni, review;
public:
    Recipe() : nume(), ingrediente(), instructiuni(), review() {} //Default constructor
    Recipe(string nume, string ing, string inst, string review) : nume(nume), ingrediente(ing), instructiuni(inst), review(review) {} //Constructor parametrizat

    void setReteta(string nume, string ing, string inst, string review)
    {
        this->nume = nume;
        this->ingrediente = ing;
        this->instructiuni = inst;
        this->review = review;

    }
    void afiseaza()
    {
        cout << "Numele retetei: " << nume << endl;
        cout << "Ingrediente: " << ingrediente << endl;
        cout << "Instructiuni: " << instructiuni << endl;
        cout << "Review: " << review << endl;
    }

    string getRecipe() const
    {
        cout << "Getter Function:\n";
        string reteta = nume + "\n" + ingrediente + "\n" + instructiuni + "\n" + review + "\n";
        return reteta;
    }
};

int main()
{
    Recipe r("Baclava", "500 g faina, amidon alimentar, 2 oua, sare, 200 ml apa calduta.", "Doar gateste bine lol", "Cea mai buna baclava e cea facuta de tine!");
    r.afiseaza();
    cout << endl;
    cout << r.getRecipe() << endl;
}