#include <iostream>
#include <cstring>
using namespace std;

void printArray(char data[][100], int jumlah);
void ascendingSort(char data[][100], int jumlah);
void descendingSort(char data[][100], int jumlah);

int main(){
    char data[10][100];
    int jumlah;

    cout << "Masukkan banyak Input data = ";
    cin >> jumlah;

    cin.ignore();
    for(int i=0; i<jumlah; i++){
        cout << "Input Nama = ";
        cin.getline(data[i], 100);
    }

    ascendingSort(data, jumlah);
    cout << "Data yang telah diurutkan Ascending sesuai Abjad Nama : " << endl;
    printArray(data, jumlah);

    cout << endl;
    descendingSort(data, jumlah);
    cout << "Data yang telah diururtkan Descending sesuai Abjad Nama : " << endl;
    printArray(data, jumlah);

    return (0);
}

void printArray(char data[][100], int jumlah){
    for(int i=0; i<jumlah; i++) {
        cout << "Nama = " << data[i] << endl;
    }
}

void ascendingSort(char data[][100], int jumlah) {
	int i, j, min_in;
	for(i=0;i<jumlah-1;i++) {
		min_in = i;
		for(j=i+1;j<jumlah;j++) {
			if (strcmp(data[j], data[min_in]) < 0){
				min_in = j;
			} 
        }
            if(min_in != i) {
				char tmp[100];
				strcpy(tmp, data[i]);
				strcpy(data[i], data[min_in]);
				strcpy(data[min_in], tmp);
			}
		
	}
}

void descendingSort(char data[][100], int jumlah){
    int i, j, max_in;
    for(i=0; i<jumlah-1; i++){
        max_in = i;
        for(j=i+1; j<jumlah; j++){
            if(strcmp(data[j], data[max_in]) > 0){
                max_in = j;
            }
            if(max_in != i){
                char tmp[100];
                strcpy(tmp, data[i]);
                strcpy(data[i], data[max_in]);
                strcpy(data[max_in], tmp);
            }
        }
    }
}
