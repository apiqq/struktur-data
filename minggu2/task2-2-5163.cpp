#include <iostream>
using namespace std;

int main() {
	char str[1000];
	
	cout<<"Masukan kalimat : ";
	cin.getline(str, 1000);
	
	char *ptr;
	ptr = str;
	
	for(int i=0;ptr[i]!='\0';i++) {
		if(ptr[i] >= 'a' && ptr[i] <= 'z') {
			ptr[i] -= 32;
		}
	}
	cout<<"Kalimat dalam huruf besar : "<<ptr<<endl;
	
	for(int i=0;ptr[i]!='\0';i++) {
		if(ptr[i] >= 'A' && ptr[i] <= 'Z') {
			ptr[i] += 32;
		}
	}
	cout<<"Kalimat dalam huruf kecil : "<<ptr<<endl;
	
	for(int i=0;ptr[i]!='\0';i++) {
		if(ptr[0] >= 'a' && ptr[0] <= 'z') {
			ptr[0] -= 32;
		}
	}
	cout<<"Kalimat dalam huruf awal besar : "<<ptr<<endl;
	
	cout<<endl;
	system("pause");
	return 0;
}


