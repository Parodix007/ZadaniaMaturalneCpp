#include<iostream>
#include<cstdlib>
#include<fstream>
#include<vector>

using namespace std;

string cezar(int liczba_przejsc, string wyraz) {
	char litera;
	string nowy_wyraz;
	int miejsce = liczba_przejsc % 26;
	cout << miejsce << endl;
	for (int i = 0; i < wyraz.size(); i++) {
		if (wyraz[i] - miejsce < 65) { // Zmien na  plus dla szyfrowania
			litera = (wyraz[i] - miejsce) + 26; // Zmien na plus dla szyfrowania
		} else {
			litera = wyraz[i] - miejsce; // Zmien na plus dla szyfrowania
		}
		nowy_wyraz.push_back(litera);
	}

	return nowy_wyraz;
}

int main() {
	ifstream pobrac_dane;
	string linia_pliku;

	vector<string> wyrazy_po_cezarze;
	vector<string>::const_iterator wyraz;
// Zadanie 6.1
	// pobrac_dane.open("Dane_PR2/dane_6_1.txt");
	// if (pobrac_dane.is_open()) {
	// 	while ( getline(pobrac_dane, linia_pliku) ) {
	// 		wyrazy_po_cezarze.push_back(cezar(107, linia_pliku));
	// 	}
	// } else {
	// 	cout << "Problem z otwarciem pliku";
	// }
	// pobrac_dane.close();

	// ofstream zapisac_dane;
	// zapisac_dane.open("Dane_PR2/dane_6_1.txt");

	// for(wyraz = wyrazy_po_cezarze.begin(); wyraz < wyrazy_po_cezarze.end(); wyraz++) {
	// 	if (zapisac_dane.is_open()) {
	// 		zapisac_dane << "" << *wyraz << "\n";
	// 	} else {
	// 		cout << "Problem z plikie przy zapisie";
	// 	}
	// }
	//zapisac_dane.close();
// Zadanie 6.2
	pobrac_dane.open("Dane_PR2/dane_6_2.txt");
	int licznik = 0;
	if (pobrac_dane.is_open()){
		while (getline(pobrac_dane, linia_pliku) && licznik < 300) {
			int przerwa = linia_pliku.find(" ");
			string wyraz, przejscia;
			for (int i = 0; i < przerwa; i++) {
				wyraz.push_back(linia_pliku[i]);
			}
			for (int i = przerwa+1; i < linia_pliku.size(); i++){
				przejscia.push_back(linia_pliku[i]);
			}
			wyrazy_po_cezarze.push_back(cezar(stoi(przejscia), wyraz));
			licznik++;
		}
	} else {
		cout << "Problem z otwarciem pliku";
	}
	pobrac_dane.close();
	cout << wyrazy_po_cezarze[0];
}