#include <iostream> // muh. afiq ma'mun
using namespace std;

void printArray(int arr[], int n);
void insertionShort(int arr[], int n);

int main() {
	int arr[] = {9, 5, 1, 4, 3};
	int n = sizeof(arr)/sizeof(int);
	cout<<"Sebelum Array di sorting : ";
	printArray(arr, n);

	insertionShort(arr, n);
	cout<<"Setelah Array di sorting : ";
	printArray(arr, n);

	return 0;
}
void printArray(int arr[], int n) {
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void insertionShort(int arr[], int n) {
	for(int i=1;i<n;i++) {
		int key = arr[i];
		int j = i-1;
		while(key < arr[j] && j >= 0) {
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = key;
	}
}