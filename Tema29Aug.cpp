#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//############################################Exercitiul 5#################################################
/*class Stiva
{
private:
    vector<int> v;
public:
    void push(int elem)
    {
        v.push_back(elem);
        cout << "Elementul " << elem << " a fost adaugat in stiva" << endl;
    }

    int pop()
    {
        if (v.empty())
        {
            cout << "Stiva este goala" << endl;
            return -1;
        }
        else
        {
            int temp = v.back();
            v.pop_back();
            return temp;
        }
    }

    int peek()
    {
        if (v.empty())
        {
            cout << "Stiva este goala" << endl;
            return -1;
        }
        else
        {
            return v.back();
        }
    }

    bool isEmpty()
    {
        return v.empty();

    }

    void afisare()
    {
        for (int i = v.size() - 1; i >= 0; --i)
        {
            cout << v[i] << endl;
        }
    }

    vector<int> getElem()
    {
        return v;
    }
};

void sortElem(vector<int>& v, Stiva& s)
{
    sort(v.begin(), v.end(), greater<>());
    for (int el : v)
    {
        s.push(el);
    }
}

int main()
{
    Stiva s;
    Stiva s2;
    cout << "Este goala stiva? " << s.isEmpty() << endl;

    s.push(22);
    s.push(12);
    s.push(99);
    s.push(40);
    s.push(1);
    s.push(4);
    s.afisare();

    vector<int> v2 = s.getElem();
    sortElem(v2, s2);
    cout << "\nStiva noua aranjata crescator este: \n";
    s2.afisare();
}*/

//############################################Exercitiul 6 ###############################################

class Stiva
{
private:
    vector<char> v;
public:
    void push(char elem)
    {
        v.push_back(elem);
    }

    char pop()
    {
        if (v.empty())
        {
            cout << "Stiva este goala" << endl;
            return '\0';
        }
        else
        {
            char temp = v.back();
            v.pop_back();
            return temp;
        }
    }

    char peek()
    {
        if (v.empty())
        {
            cout << "Stiva este goala" << endl;
            return -1;
        }
        else
        {
            return v.back();
        }
    }

    bool isEmpty()
    {
        return v.empty();

    }

    void afisare()
    {
        for (int i = v.size() - 1; i >= 0; --i)
        {
            cout << v[i] << endl;
        }
    }

    bool isPalindrom()
    {
        for (int i = 0; i < v.size() / 2; ++i)
        {
            if (v[i] != v[v.size() - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Stiva s;
    string str = "A man, a plan, a canal, Panama";
    for (int i = 0; i <= str.size(); ++i)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != ',')
        {
            s.push(tolower(str[i]));
        }
        else
        {
            while (!s.isEmpty())
            {
                cout << s.pop();
            }
            cout << " ";
        }
    }
    cout << endl;

    if (s.isPalindrom())
    {
        cout << "Stringul este Palindrom" << endl;
    }
    else
    {
        cout << "Stringul nu este Palindrom" << endl;
    }
}