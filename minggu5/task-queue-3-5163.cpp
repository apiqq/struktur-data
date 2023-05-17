#include <iostream>
using namespace std;

const int MAX_VALUE = 10;

struct Queue {
    int depan;
    int belakang;
    int data[MAX_VALUE];
};

Queue queue;

void inisialisasi();
void enqueue(int data);
void dequeue();
void clear();
void print();

int main() {
    inisialisasi();
    int data = 0;
    int pilihan;
    
    do {
        cout<<"          >>> SYSTEM ANTRIAN <<<       "<<endl<<endl;
        cout<<"|1. Menambahkan antrian               |"<<endl;
        cout<<"|2. Panggilkan antrian                |"<<endl;
        cout<<"|3. Menampilkan semua daftar antrian  |"<<endl;
        cout<<"|4. Hapus semua daftar antrian        |"<<endl;
        cout<<"|5. Keluar sistem                     |"<<endl<<endl;

        cout<<" Masukan No Pilihan Anda : ";
        cin>>pilihan;
        cout<<endl;

        switch(pilihan) {
            case 1:
                if(queue.belakang != MAX_VALUE-1) {
                    data++;
                    cout<<"No. Antrian  : " << data << endl;
                    enqueue(data);
                } else {
                    cout<<"Antrian sudah penuh!!"<<endl<<endl;
                }
                break;
            case 2:
                if(queue.belakang != -1) {
                    dequeue();    
                } else {
                    cout<<"Antrian masih kosong!!"<<endl<<endl;
                }
                break;
            case 3:
                if(queue.belakang != -1) {
                    print();    
                } else {
                    cout<<"Antrian masih kosong!!"<<endl<<endl;
                }
                break;
            case 4:
                if(queue.belakang != -1) {
                	data = 0;
                    clear();    
                } else {
                    cout<<"Antrian masih kosong!!"<<endl<<endl;
                }
                break;
            case 5:
                cout<<"Terima kasih telah menggunakan sistem antrian!"<<endl<<endl;
                break;
            default:
                cout<<"Menu yang anda pilih tidak terdaftar!"<<endl<<endl;
                break;
        }
        cout<<endl;
    } while(pilihan != 5);

    return 0;
}

void inisialisasi() {
    queue.depan = queue.belakang = -1;
}

void enqueue(int data) {
    queue.belakang++;
    queue.data[queue.belakang] = data;
    cout<<"Antrian yang menunggu : " << queue.belakang <<endl<<endl;
}

void dequeue() {
    cout<<"No. Antrian: "<< queue.data[queue.depan] << endl;
    for(int i=queue.depan+1;i<queue.belakang;i++) {
        queue.data[i] = queue.data[i+1];
    }
    queue.belakang--;
    if(queue.belakang == -1) {
        queue.depan = -1;
    }
    cout << "Silahkan anda dipanggil!" << endl;
    
    cout<<"Antrian yang menunggu : "<< queue.belakang <<endl<<endl;
}

void clear() {
    queue.depan = queue.belakang = -1;
    cout<<"Antrian sudah dikosongkan"<<endl<<endl;
}

void print() {
    cout<<"Daftar antrian "<<endl<<endl;
    for(int i=queue.depan+1;i<=queue.belakang;i++) {
        cout<<queue.data[i]<<endl;
    }
}