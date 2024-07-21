#include<iostream>
#include<string>
using namespace std;


class MagicCreature
{
private:
    string name, type;
    int age, magicLevel;
public:
    //MagicCreature() : name("Unnamed"), type("Uknown"), age(0), magicLevel(0) {} // Default constructor
    MagicCreature() //Default Constructor
    {
        cout << "Constructor Implicit" << endl;
        this->name = "Unnamed";
        this->type = "Unknown";
        this->age = 0;
        this->magicLevel = 0;
    }
    MagicCreature(string name, string type, int age, int magicLevel) : name(name), type(type), age(age), magicLevel(magicLevel) {} // Constructor parametrizat

    void setCreature(string name, string type, int age, int magicLevel)
    {
        this->name = name;
        this->type = type;
        this->age = age;
        this->magicLevel = magicLevel;
    }

    void display()
    {
        cout << "Creature name: " << name << " | Type: " << type << " | Age: " << age << " | MagicLevel: " << magicLevel << endl;
    }

    string getCreature() const //Getter Const
    {
        cout << "Getter Function:\n";
        string creature = "Creature name: " + name + " | Type: " + type + " | Age: " + std::to_string(age) + " | MagicLevel: " + std::to_string(magicLevel) + "\n";
        return creature;
    }

    MagicCreature(const MagicCreature& c) //Copy Const
    {
        cout << "Copy Construct" << endl;
        this->name = c.name;
        this->type = c.type;
        this->age = c.age;
        this->magicLevel = c.magicLevel;
    }
    void display(string s) const
    {
        cout << "Creatura Supraincarcata " << s << endl;
        cout << "Creature name: " << name << " | Type: " << type << " | Age: " << age << " | MagicLevel: " << magicLevel << endl;
    }
};

int main()
{
    MagicCreature c1("Crocobalaur", "Mutant", 5, 10), c2(c1), c3;
    c1.display();
    cout << endl;
    cout << c1.getCreature() << endl;
    cout << "\n" << "Copy Construct:" << endl;
    c2.display();
    c3.display("La maxim: ");
}