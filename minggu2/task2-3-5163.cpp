#include <iostream>
using namespace std;


int main() {
	char str[1000];
	char *reverse;
	int i, jumlah;
	
	jumlah = 0;
	reverse = str;
	
	cout<<"Masukan kalimat : ";
	cin.getline(str, 1000);
	
	for(i=0;str[i]!='\0';i++) {
		jumlah++;
	}
	cout<<"dibalik : ";
	for(i=jumlah-1;i>=0;i--) {
		cout<<reverse[i];
	}

}
