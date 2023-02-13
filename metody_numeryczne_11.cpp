#include <iostream>

using namespace std;


float Funkcja(float x)
{
	return (-0.5) * x * x * x + 3 * x * x - 5;
}


// funkcja zwraca obliczone pochodne z powyższych funkcji 
float Pochodna(float x)
{
	return (-1.5) * x * x + 6 * x;
}


int main()
{
	float ps; // punkt startowy
	cout << "Podaj punkt startowy" << endl;
	cin >> ps;

	float il_it; // ilość iteracji
	cout << "Podaj ilosc iteracji" << endl;
	cin >> il_it;

	float pk;
	pk = ps;

	cout << endl << "--------------------------Obliczenia dla funkcji: f(x) = -0,5x^3 + 3x^2 - 5 :-------------------------------" << endl << endl;

	cout << "Pochodna funkcji wynosi: f'(x) = -1,5x^2 + 6x" << endl << endl;

	cout << "Metoda stycznych:" << endl << endl;
	for (int i = 0; i < il_it; i++)
	{
		ps = ps - (Funkcja(ps) / Pochodna(ps));
		cout << "Liczba iteracji: " << i + 1 << endl;
		cout << "x" << i + 1 << " = " << ps << endl;
		cout << "Wartosc funkcji: " << Funkcja(ps) << endl << endl;
	}


}

