#include <iostream>
using namespace std;

int lungime(string sir, int i = 0) {
	if (sir[i] == '\0')
		return 0;
	return 1 + lungime(sir, i + 1);
}
char majuscula(string sir, int i = 0) {
	if (sir[i] == '\0')
		return 0;
	if (isupper(sir[i]))
		return sir[i];
	return majuscula(sir, i + 1);
}
bool prim(int n, int i = 2) {
	if (n <= 1)
		return false;
	if (n == 2)
		return true;
	if (n % i == 0)
		return false;
	if (i * i > n)
		return true;
	return prim(n, i + 1);
}
int main() {
	//Tema1
	string sir = "tEmA";
	cout << "Lungimea sirului de caractere: " << lungime(sir) << endl;
	//Tema2
	char maj = majuscula(sir);
	if (maj == 0)
		cout << "Nici o majuscula gasita" << endl;
	else
		cout << "Prima Majuscula gasita: " << maj << "\n";
	int n;
	cout << "Introdu un nr pentru a verifica daca este prim: ";
	//Tema3
	cin >> n;
	if (prim(n))
		cout << "Este prim." << endl;
	else
		cout << "Nu este prim" << endl;
	cout << n % (n / 2) << endl;
}