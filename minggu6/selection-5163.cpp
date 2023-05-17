#include <iostream> // muh. afiq ma'mun
using namespace std;

void print(int arr[], int n);
void selectionSort(int arr[], int n);

int main() {
	int arr[] = {20, 12, 10, 15, 2};
	int i, j, n, temp;
	n = sizeof(arr)/sizeof(int);
	cout<<"Sebelum Array di sorting : ";
	print(arr, n);

	selectionSort(arr, n);
	cout<<"Setelah Array di sorting : ";
	print(arr, n);

	return 0;
}
void print(int arr[], int n) {
	for(int i=0;i<n;i++) 
		cout<<arr[i]<<" "; cout<<endl;
}
void selectionSort(int arr[], int n) {
	int i, j, min_in;
	for(i=0;i<n;i++) {
		min_in = i;
		for(j=i;j<n;j++) {
			if(arr[j] < arr[min_in])
				min_in = j;
			swap(arr[i], arr[min_in]);
		}
	}
}
