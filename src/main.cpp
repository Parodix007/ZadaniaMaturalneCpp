#include<iostream>
#include<string>
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

int main(){
	// cout << "Podaj liczbe calkowita: ";
	// int liczba;
	// cin >> liczba;

	//string wynik = (liczbaPierwsza(liczba) == true) ? "pierwsza" : "nie pierwsza";
	//cout << wynik << endl; Wypisze wynik z algorytmu liczbaPierwsza


	// rozkladNaCzynnikiPierwsze(liczba);  Wypisze wartosci ktore sa czynnikami pierwszymi podanej liczby

	wzorceTekst();

	return 0;
}