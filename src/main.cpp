#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

// Algorytm na liczbe pierwsza
bool liczbaPierwsza(int liczba) {
	for (int i = 2; i < liczba; i++) {
		if (liczba % i != 0) {
			continue;
		} else {
			return false;
		}
	}

	return true;
}

// Algortm na rozklad liczby na czynniki pierwsze
void rozkladNaCzynnikiPierwsze(int liczba_) {
	int liczbaDoRozkladu = liczba_;

	vector<int> reszta;
	vector<int>::const_iterator iter;

	for (int i = 2; i < liczbaDoRozkladu; i++) {
		if (liczbaDoRozkladu % i == 0) {
			reszta.push_back(i);
		}
	}
	for (iter = reszta.begin(); iter != reszta.end(); iter++) {
		cout << *iter << endl;
	}
	//cout << liczbaDoRozkladu;
}

void wzorceTekst() {
	string wyraz, wzorzec;
	vector<int> zakres;
	vector<int>::const_iterator iter;
	cout << "Podaj wyraz:" << endl;
	cin >> wyraz;
	cout << "Podaj wzorzec:" << endl;
	cin >> wzorzec;


	for (int i = 0; i < wyraz.size(); i++) {
		if (wyraz[i] == wzorzec[zakres.size()]) {
			zakres.push_back(i);
			if (zakres.size() == wzorzec.size()) {
				break;
			}
		}
	}
	
	for (iter = zakres.begin(); iter != zakres.end(); iter++) {
		cout << *iter << endl;
	}
}

// Algorytm na szyfrowanie szyfrem cezara
string szyfrCezara(int liczba_przesuniec) {
	string wyraz = "INTERPRETOWANIE";
	// cout << "Podaj wyraz" << endl;
	// cin >> wyraz;

	string zaszyfrowany_wyraz;

	int miejsce_w_afabe = liczba_przesuniec % 26;
	cout << miejsce_w_afabe << endl;

	for (int i = 0; i < wyraz.size(); i++) {
		char nowa_litera;
		if (wyraz[i] + miejsce_w_afabe > 90) {
			nowa_litera = (wyraz[i] + miejsce_w_afabe) - 26;
		} else {
			nowa_litera = wyraz[i] + miejsce_w_afabe;
		}
		zaszyfrowany_wyraz.push_back(nowa_litera);
	}
	return zaszyfrowany_wyraz;
}
int main(){
	// cout << "Podaj liczbe calkowita: ";
	// int liczba;
	// cin >> liczba;

	//string wynik = (liczbaPierwsza(liczba) == true) ? "pierwsza" : "nie pierwsza";
	//cout << wynik << endl; Wypisze wynik z algorytmu liczbaPierwsza


	// rozkladNaCzynnikiPierwsze(liczba);  Wypisze wartosci ktore sa czynnikami pierwszymi podanej liczby

	//wzorceTekst();

	cout << szyfrCezara(107) << endl;

	return 0;
}