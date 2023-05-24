#include <iostream>
using namespace std;

int main() {
	int jumlahElemenArray;
	cout<<"Jumlah nilai yang ingin ditampilkan : "; cin>>jumlahElemenArray;
	int nilai[jumlahElemenArray];
	
	cout<<"Masukan nilai [1 - 100] : "<<endl;
	for(int index=0;index<jumlahElemenArray;index++) {
		cout<<"Nilai ke "<<index+1<<" = "; cin>>nilai[index];
	}
	cout<<endl<<endl;
	
	int cari = 0;
	cout<<"Masukan nilai yang anda cari : "; cin>>cari;
	bool isKetemu = false;
	
	int index;
	for(index = 0;index<jumlahElemenArray;index++) {
		if(cari == nilai[index]) {
			isKetemu = true;
			break;
		}
	}
	
	if(isKetemu) {
		cout<<"Data ditemukan pada index ke-"<<index<<endl<<endl;
	} else {
		cout<<"Data tidak ditemukan"<<endl<<endl;
	}
	system("pause");
	return 0;
}
