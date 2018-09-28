// DSS_NeedlemanWunsch.cpp 
// Algoritma Penentuan Kesetaraan DNA menggunakan metode Needleman Wunsch berbasis C++
// 2018 Hansrenee Wilysandro
#include "pch.h"
#include <iostream>
#include <vector> 
#include <string>
#include <sstream>

using namespace std;


//Fungsi Untuk Menampilkan Matriks
void printMatrix(int** matrix_masukan, int baris, int kolom) {
	for (int i = 0; i < baris; i++) {
		for (int z = 0; z < kolom; z++) {
			cout << matrix_masukan[i][z] << " ";
		}
		cout << "" << endl;

	}
}


//Fungsi Untuk mengambil nilai tertinggi 
int max(int angka1, int angka2, int angka3) {
	if ((angka1 > angka2) && (angka1 > angka3)) {
		return angka1;
	}
	else if ((angka2 > angka1) && (angka2 > angka3)) {
		return angka2;
	}
	else {
		return angka3;
	}
}

int main()
{
	//Deklarasi Variabel untuk algoritma
	string DNA1;
	string DNA2;
	int panjangDNA1;
	int panjangDNA2;
	///////////////////////////////////////
	cout << "------------------------------" << endl;
	cout << "Demonstrasi Algoritma Needleman Wunsch " << endl << "Dibuat Oleh Hansrenee Willysandro" << endl;
	cout << "Berbasis C++" << endl << "------------------------------" << endl << endl;
	cout << "Masukan deret DNA Pertama (Tekan enter untuk memasukan input): ";
	cin >> DNA1;
	panjangDNA1 = DNA1.size() + 1;
	cout << "masukan deret DNA Kedua: "; 
	cin >> DNA2;
	panjangDNA2 = DNA2.size() + 1;


	//Buat Matriks untuk menampung nilai
	int** matrix = new int*[panjangDNA1];
	for (int i = 0; i < panjangDNA1; i++) {
		matrix[i] = new int[panjangDNA2];
	}
    
	//Isi base dasar pada baris dan kolom indeks ke 0 sampai akhir
	bool isi_kolom_nol = false;
	for (int i = 0; i < panjangDNA1; i++) {
		if (i==0) {
			for (int z = 0; z < panjangDNA2; z++) {
				matrix[i][z] = 0;
			}
		}
		else {
			for (int z = 1; z < panjangDNA2; z++) {
				matrix[i][z] = NULL; //Untuk mencegah kebingungan assign nilai yang kosong sewaktu di print
			}
		}
		matrix[i][0] = 0;
	}
	//Opsional untuk membuat print matriks
	printMatrix(matrix, panjangDNA1, panjangDNA2);

	//Perhitungan Nilai
	for (int i = 1; i < panjangDNA1; i++) {

	}

	system("pause");

}
