// Program Sederhana menentukan usia seseorang.

#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string nama, kategori;
	int usia;
	
	cout << "--- Program Menentukan kategori berdasarkan usia seseorang ---" << endl;
	cout << "Masukan nama anda : \n";
	getline(cin, nama);
	cout << "Masukan usia anda : \n";
	cin >> usia;
	cout << "------------" << endl;
	cout << endl;
	
	
	if(usia <= 1) {
		kategori = "Bayi";
	}else if(usia >1 && usia <=3) {
		kategori = "Batita";
	}else if(usia >3 && usia <=5){
		kategori = "Balita";
	}else if(usia >5 && usia <=12) {
		kategori = "Anak-Anak";
	}else if(usia >12 && usia <=17){
		kategori = "Remaja";
	}else if(usia >17 && usia <=30){
		kategori = "Pemuda";
	}else if(usia >30 &&usia<=60){
		kategori = "Dewasa";
	}else if(usia > 60) {
		kategori = "Lansia";
	}else {
		cout << " ";
	}
	
	cout << "Nama anda adalah : " << nama;
	cout << endl;
	cout << "Usia anda adalah : " << usia;
	cout << endl;
	cout << "Kategori : " <<kategori; 
	
	return 0;
}
