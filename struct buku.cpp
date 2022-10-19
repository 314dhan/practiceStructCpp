#include <iostream>
#include <string>

using namespace std;

struct Buku{
	int kodeBuku[10];
	string namaBuku[100];
	int tahunTerbit[100];
	string pengarang[100];
	int harga[100];
};


int main(){
	
	char jawab;
	Buku bk[5];
	int jumlah;
	int arraySize = sizeof(bk)/sizeof(bk[0]);
	cout << "anda ingin pesan berapa buku?(maksimal 5 buku): ";
	cin >> jumlah;
	for(int i = 0; i < jumlah; i++){
		if(jumlah > 5){
			cout << "maaf maksimal hanya 5 buku\n\n";
			break;
		}
		cout << "masukan kode buku: ";
		cin >> bk[i].kodeBuku;
		cout << "masukan nama buku: ";
		cin >> bk[i].namaBuku;
		cout << "masukan tahun Terbit: ";
		cin >> bk[i].tahunTerbit;
		cout << "masukan pengarang: ";
		cin >> bk[i].pengarang;
		cout << "masukan harga: ";
		cin >> bk[i].harga;
		cout << "\n";
//		cout << "apakah anda ingin memesan lagi: ";
//		cin >> jawab;
//		if(jawab == 'y'){
//			cout << "anda memesan lagi\n";
//		}else{
//			break;
//		}
	}
	
	cout << "anda memesan: " << jumlah << " buku\n\n";
	
	for(int j = 0; j < jumlah; j++){
		if(jumlah > 5){
			break;
		}
		cout << "kode buku: " << bk[j].kodeBuku << endl;
		cout << "nama buku: " << bk[j].namaBuku << endl;
		cout << "tahun terbit: " << bk[j].tahunTerbit << endl;
		cout << "pengarang: " << bk[j].pengarang << endl;
		cout << "harga: " << bk[j].harga << endl;
		cout << "\n";
	}
	
	cout << "terima kasih telah membeli";

	
	cin.get();
	return 0;
}
