#include <iostream>
using namespace std;

class Mahasiswa {

private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "nama : " << nama << endl;
	}
};

class Matakuliah {
private:
	string kode;
	string namamK;
	int sks;

public:
	void InputMk();
	void TampilMK();

};

void Matakuliah::InputMk() {
	cout << "\nMasukkan Kode Mata Kuliah : ";
	cin >> kode;
	cout << "Masukkan Nama Mata Kuliah : ";
	cin >> namamK;
	cout << "Masukkan Sks Mata Kuliah : ";
	cin >> sks;
}

void Matakuliah::TampilMK() {
	cout << "\nKode Mata Kuliah : " << kode << endl;
	cout << "Nama Mata Kuliah : " << namamK << endl;
}

