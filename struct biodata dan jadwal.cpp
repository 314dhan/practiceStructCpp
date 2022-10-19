#include <iostream>
#include <string>

using namespace std;

struct Biodata{
	int nip;
	string nama, alamat, jadwal;
};

struct Jadwal{
	string bulan;
	int tahun, umur, totaljamkerja;
};

int main(){
	
	char gol;
	int gaji;
	Biodata bio[1];
	Jadwal jadwal[1];
	
	cout << "masukan biodata: \n\n";
	
	cout << "masukan nip: ";
	cin >> bio[0].nip;
	cout << "masukan nama: ";
	cin >> bio[0].nama;
	cout << "masukan alamat: ";
	cin >> bio[0].alamat;
	cout << "masukan jadwal: ";
	cin >> bio[0].jadwal;
	
	cout << "\nmasukan jadwal acara \n\n";
	
	cout << "masukan masukan bulan: ";
	cin >> jadwal[0].bulan;
	cout << "masukan tahun: ";
	cin >> jadwal[0].tahun;
	cout << "masukan umur: ";
	cin >> jadwal[0].umur;
	cout << "masukan total jam kerja: ";
	cin >> jadwal[0].totaljamkerja;
	
	cout << "masukan golongan(A, B, C): ";
	cin >> gol;
	if(gol == 'A' || gol == 'a'){
		gaji = 4000000;
	}else if(gol == 'B' || gol == 'b'){
		gaji = 5000000;
	}else if(gol == 'C' || gol == 'c'){
		gaji = 6000000;
	}
	cout << "\n\nNIP	" << "NAMA	" << "ALAMAT	" << "JADWAL	" << "BULAN	" << "TAHUN	" << "UMUR	" << "TOTAL JAM KERJA	" << "GAJI	\n\n";
	cout << bio[0].nip << "	" << bio[0].nama << "	" << bio[0].alamat << "	" << bio[0].jadwal << "	" << jadwal[0].bulan << "	" << jadwal[0].tahun << "	" << jadwal[0].umur << "	" << jadwal[0].totaljamkerja << "		" << gaji;

//	cout << "Nip: " <<  << endl;
//	cout << "Nama: " <<  << endl;
//	cout << "Alamat: " <<  << endl;
//	cout << "Jadwal: " <<  << endl;
//	cout << "bulan: " <<  << endl;
//	cout << "tahun: " << << endl;
//	cout << "umur: " <<  << endl;
//	cout << "total jam kerja: " <<  << endl;
	
	cin.get();
	return 0;
}
