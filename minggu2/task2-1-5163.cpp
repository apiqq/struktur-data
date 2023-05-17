#include <iostream>
using namespace std;

int getTotalWord(char *kalimat) {
	int kondisi = 0;
	int counter = 0;	// Muh. Afiq Ma'mun 22.11.5163

	while(*kalimat) {
		if(*kalimat == ' ') {
			kondisi = 1;
		} else if(kondisi == 1) {
			kondisi = 0;
			counter++;
		}
		++kalimat;
	}
	return counter+1;
}

int main() {
	char kalimat[1000];
	cout<<"Masukan kalimat : ";
	cin.get(kalimat, 1000);
	cout<<"Jumlah kata dalam kalimat \""<<kalimat<<"\" adalah : "<<getTotalWord(kalimat)<<endl;
	return 0;
}
