#include <iostream>
#include <string> 
using namespace std;

struct Mahasiswa
{
    char npm[11];
    char nama[30];
    char alamat[100];
    char tahun[4];
    float ipk;
};

int main() {
    int jumlahMahasiswa;
    cout << "Jumlah mahasiswa yang ingin diinputkan : ";
    cin >> jumlahMahasiswa;
    cout << endl;

    Mahasiswa mhs[jumlahMahasiswa];

    cin.ignore();

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data Mahasiswa ke #" << (i+1) << endl;
        cout << " NPM : ";
        cin.getline(mhs[i].npm, 11);
        cout << " Nama : ";
        cin.getline(mhs[i].nama, 30);
        cout << " Alamat : ";
        cin.getline(mhs[i].alamat, 100);
        cout << " Tahun Masuk : ";
        cin.getline(mhs[i].tahun, 5);
        cout << " IPK : ";
        cin >> mhs[i].ipk;

        cout << endl;
        cin.ignore();
    }
    cout << endl;

    cout << "Laporan Data Mahasiswa" << endl;
    cout << "======================" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "No. #" << (i+1) << endl;
        cout << " NPM : " << mhs[i].npm << endl;
        cout << " Nama : " << mhs[i].nama << endl;
        cout << " Alamat : "<< mhs[i].alamat << endl;
        cout << " Tahun Masuk : " << mhs[i].tahun << endl;
        cout << " IPK : " << mhs[i].ipk << endl;

        cout << endl << endl;
    }

    system("pause");
    return 0;
}

