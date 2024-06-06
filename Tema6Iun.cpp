#include <iostream>
#include <vector>
using namespace std;

//Tema1
/*int main() {
    vector<int> v = { 10, 20, 30, 40, 50 };
    for (auto el : v) {
        cout << "Element: " << el << endl;
    }
    v[2] = 25;
    cout << "\n" << endl;
    for (auto el : v) {
        cout << "Element: " << el << endl;
    }
}*/
//Tema2
/*int main() {
    vector<int> v = { 2,4,6,8,10 };
    int sum = 0;
    for (auto el : v) {
        cout << "Element: " << el << endl;
        sum += el;
    }
    cout << "Suma tuturor elementelor este: " << sum << endl;
}*/
//Tema3
/*int main() {
    vector<int> v = { 1,2,3,4,5 };
    int n = v.size();
    for (auto el : v) {
        cout << "Element: " << el << endl;
    }
    cout << "\n" << endl;
    for (int i = 0; i < n / 2; i++) {
        swap(v[i], v[n - 1 - i]);
    }
    for (auto el : v) {
        cout << "Element: " << el << endl;
    }
}*/
//Tema4
int main() { //Am folosit solutia de shiftare la stanga.
    vector<int> v = { 1,2,2,3,4,4,5 };
    int n = v.size();
    for (auto el : v) {
        cout << "Element: " << el << endl;
    }
    cout << "\n" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n;) {
            if (v[i] == v[j]) {
                for (int k = j; k < n - 1; k++) {
                    v[k] = v[k + 1];
                }
                --n;
            }
            else {
                j++;
            }
        }
    }
    v.resize(n);
    for (auto el : v) {
        cout << "Element: " << el << endl;
    }
}