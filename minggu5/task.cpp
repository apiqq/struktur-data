#include <iostream>
using namespace std;

const int MAX_VALUE = 5;
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
bool isFull();
bool isEmpty();

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
        		if(isFull() == 0) {
        			data++;
        			cout<<"No. Antrian : "<<data<<endl;
        			enqueue(data);
        		} else {
        			cout<<"Antrian sudah penuh!"<<endl;
        		}
        		break;
        	case 2:
        		dequeue();
        		break;
        	case 3:
        		print();
        		break;
        	case 4:
        		clear();
        		break;
        	default:
        		if(pilihan == 5) {
        			cout<<"Terimakasih telah menggunakan sistem antrian."<<endl;
        		} else {
        			cout<<"Menu yang anda pilih tidak terdaftar!"<<endl;
        		}
        }
	} while(pilihan != 5);
	return 0;
}

void inisialisasi() {
	queue.depan = queue.belakang = -1;
}
void enqueue(int data) {
	queue.belakang++;
	queue.data[queue.belakang] = data;
	cout<<"Antrian yang menunggu : "<<queue.belakang<<endl<<endl;
}
void dequeue() {
	cout<<"No. Antrian : "<<queue.data[queue.depan + 1]<<endl;
	for(int i=queue.depan+1;i<queue.belakang;i++) {
		queue.data[i] = queue.data[i+1];
	}
	queue.belakang--;
	cout<<"Silahkan anda dipanggil!"<<endl;
	if(queue.belakang == -1) {
		queue.depan = -1;
		cout<<"Antrian yang menunggu : "<<queue.belakang+1<<endl<<endl;
	} else {
		cout<<"Antrian yang menunggu : "<<queue.belakang<<endl<<endl;
	}
		
}
void clear() {
	queue.depan = queue.belakang = -1;
	cout<<"Antrian sudah dikosongkan."<<endl;
}
void print() {
	cout<<"Daftar antrian :"<<endl<<endl;
	for(int i=queue.depan+1;i<queue.belakang;i++) {
		cout<<queue.data[i]<<" "<<i<<endl;
	}
}
bool isEmpty() {
	if(queue.belakang = -1) {
		return true;
	} else {
		return false;
	}
}
bool isFull() {
	if(queue.belakang = MAX_VALUE - 1) {
		return true;
	} else {
		return false;
	}
}

