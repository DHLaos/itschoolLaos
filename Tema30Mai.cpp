#include <iostream>
using namespace std;

//Exercitiul 1
/*int max(int x[], int n)
{
	int max = x[0];
	for (int i = 1; i < n; ++i)
	{
		if (x[i] > max)
		{
			max = x[i];
		}
	}
	return max;
}

int main()
{
	int x[100] = { 7,8,9,10,11,12,0 };
	int n = 7;
	cout << "Maxim: " << max(x, n);
}*/

//Exercitiul 2&3
int main()
{
	char x[11] = { 'A','B','C','D','E','A','B','C','D','E' };
	int n = 10;
	cout << x << endl;

	//Exercitiul 1
	char c = 'E';
	for (int i = 1; i < n; ++i) {
		if (x[i] == c) {
			cout << "Caracterul " << c << " Exista" << endl;
			break;
		}
	}
	//Exercitiul 2
	int k = 0;
	for (int y = 1; y < n; ++y) {
		if (x[y] == c) 
			++k;
	}
	cout << "De asemenea, caracterul " << c << " apare de " << k << " ori in sir" << endl;
}