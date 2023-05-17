#include <iostream>
using namespace std;

struct Karyawan {
	int karyawanID;
	int umur;
	float gaji;
};

void inputDataKaryawan(Karyawan *nama);
void cetakDataKaryawan(Karyawan nama);
float getTotalGaji(Karyawan karyawan1, Karyawan karyawan2);

int main() {
	Karyawan joko, paijo;
	
	// input data joko
	inputDataKaryawan(&joko);
	// input data paijo
	inputDataKaryawan(&paijo);
	
	// cetak joko
	cetakDataKaryawan(joko);
	// cetak paijo
	cetakDataKaryawan(paijo);
	
	// total gaji joko dan paijo
	float totalGaji = getTotalGaji(joko, paijo);
	cout<<"Total gaji joko dan paijo : "<<totalGaji<<endl<<endl;
	
	system("pause");
	return 0;
}

void inputDataKaryawan(Karyawan *nama) {
	cout<<"Input data karyawan"<<endl;
	cout<<"==================="<<endl;
	cout<<"ID   : "; cin>>nama->karyawanID;
	cout<<"Umur : "; cin>>nama->umur;
	cout<<"Gaji : "; cin>>nama->gaji;
	cout<<endl;
}

void cetakDataKaryawan(Karyawan nama) {
	cout<<"Data karyawan"<<endl;
	cout<<"============="<<endl;
	cout<<"ID   : "<<nama.karyawanID<<endl;
	cout<<"Umur : "<<nama.umur<<endl;
	cout<<"Gaji : "<<nama.gaji<<endl;
	cout<<endl;	
}
float getTotalGaji(Karyawan karyawan1, Karyawan karyawan2) {
	return karyawan1.gaji + karyawan2.gaji;
}
