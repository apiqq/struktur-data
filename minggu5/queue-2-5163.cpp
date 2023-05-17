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
void showQueue();
bool isFull();
bool isEmpty();

int main() {
	inisialisasi();
	int data;
	int pilihan;
	
	do {
		cout<<">>> PILIHAN MENU QUEUE <<<"<<endl<<endl;
		cout<<"1. Menambah item queue"<<endl;
		cout<<"2. Mengapus item queue"<<endl;
		cout<<"3. Menampilkan item queue"<<endl;
		cout<<"4. Mengosongkan item queue"<<endl;
		cout<<"5. Selesai"<<endl<<endl;

		cout<<"Masukan pilihan anda : ";
		cin>>pilihan;
		cout<<endl;

		switch(pilihan) {
			case 1:
				if(!isFull()) {
					cout<<"Masukan data : ";
					cin>>data;
					enqueue(data);
				} else {
					cout<<"Data sudah penuh!!"<<endl<<endl;
				}
				break;
			case 2:
				if(!isEmpty()) {
					dequeue();	
				} else {
					cout<<"Data masih kosong!!"<<endl<<endl;
				}
				break;
			case 3:
				if(!isEmpty()) {
					showQueue();	
				} else {
					cout<<"Data masih kosong!!"<<endl<<endl;
				}
				break;
			case 4:
				if(!isEmpty()) {
					clear();	
				} else {
					cout<<"Data masih kosong!!"<<endl<<endl;
				}
				break;
			default:
				if(pilihan != 5) {
					cout<<"Menu yang anda pilih tidak terdaftar!"<<endl<<endl;
				}
				break;
		}
		cout<<endl;
	} while(pilihan != 5);

	system("pause");
	return 0;
}

void inisialisasi() {
	queue.depan = queue.belakang = -1;
}
void enqueue(int data) {
	queue.depan = 0;
	queue.belakang++;
	queue.data[queue.belakang] = data;
	cout<<"Data berhasil ditambahkan"<<endl<<endl;
}
void dequeue() {
	cout<<"Data "<<queue.data[queue.depan]<<" sudah dihapus"<<endl<<endl;
	for(int i=queue.depan;i<=queue.belakang;i++) {
		queue.data[i] = queue.data[i+1];
	}
	queue.belakang--;
}
void clear() {
	queue.depan = queue.belakang = -1;
	cout<<"Queue sudah dikosongkan"<<endl<<endl;
}
void showQueue() {
	cout<<"Isi queue : "<<endl<<endl;
	for(int i=queue.belakang;i>=0;i--) {
		cout<<queue.data[i]<<endl;
	}
}
bool isFull() {
	return queue.belakang >= MAX_VALUE - 1;
}
bool isEmpty() {
	return queue.depan == -1;
}
