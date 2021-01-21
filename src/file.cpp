#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>

using namespace std;

int main(){
	/*
		ofstream -> ios::out
		ifstream -> ios::in
		fstream -> ios::in | ios::out
	*/
	ifstream file;
	string line;
	file.open("text.txt");
	if(file.is_open()) {
		while (getline(file, line)) {
			cout << line << endl;
		}
		file.close();
	} else {
		cout << "Error";
	}
	return 0;
}