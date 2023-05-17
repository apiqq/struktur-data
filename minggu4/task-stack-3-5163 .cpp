#include <iostream>
#include <string.h>
using namespace std;

const int MAX_STACK = 5;
struct Stack {
	int top;
	char data[MAX_STACK][100];
};

void inisialisasi();
void push(char data[]);
void pop();
void clear();
bool isEmpty();
bool isFull();
void print();

Stack stack;

int main() {
	inisialisasi();
	
	int pilihanMenu;
	char data[100];
	
	do {
		cout<<">>> PILIHAN MENU STACK <<<"<<endl<<endl;
		cout<<"1. Menambah item stack"<<endl;
		cout<<"2. Menghapus item stack"<<endl;
		cout<<"3. Menampilkan item stack"<<endl;
		cout<<"4. Mengosongkan item stack"<<endl;
		cout<<"5. Selesai"<<endl<<endl;
		
		cout<<"Masukan pilihan Anda : "; cin>>pilihanMenu;
		cout<<endl;
		
		switch(pilihanMenu) {
			case 1:
				if(!isFull()) {
					cout<<"Masukan data : ";
					cin.ignore();
					cin.getline(data, 100);
					push(data);	
				} else {
					cout<<"Stack Sudah Penuh!!"<<endl<<endl;
				}
				break;
			case 2:
				if(isEmpty()) {
					cout<<"Stack masih kosong!!"<<endl<<endl;
				} else {
					pop();	
				}
				break;
			case 3:
				if(isEmpty()) {
					cout<<"Stack masih kosong!!"<<endl<<endl;
				} else {
					print();
				}
				break;
			case 4:
				if(isEmpty()) {
					cout<<"Stack masih kosong!!"<<endl<<endl;
				} else {
					clear();
				}
				break;
		}
		
	} while(pilihanMenu != 5);
	
	cout<<endl;
	
	system("pause");
	return 0;
}

// fungsi stack
void inisialisasi() {
	stack.top = -1;
}

void push(char data[100]) {	
	stack.top++;
	strcpy(stack.data[stack.top], data);
	cout<<"Data berhasil ditambahkan!"<<endl<<endl;		
}

void pop() {
	cout<<" Data "<<stack.data[stack.top]<<" sudah dihapus"<<endl<<endl;
	stack.top--;
}

void clear() {
	stack.top = -1;
	cout<<"Stack sudah dikosongkan"<<endl<<endl;
}

bool isEmpty() {
	return (stack.top == -1);
}

bool isFull() {
	return (stack.top >= (MAX_STACK - 1));
}

void print() {
	cout<<"Isi stack : "<<endl<<endl;
	for(int i=stack.top;i>=0;i--) {
		cout<<stack.data[i]<<endl;
	}
	cout<<endl<<endl;
}