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
	string namaMk;
	int sks;
};

