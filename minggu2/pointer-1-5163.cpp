#include <iostream>
using namespace std;

int main() {
    int x = 100;

    int *ptrX = &x;
    int *ptrY = &x;

    cout<<"Isi variable x = "<<x<<", ada di alamat "<<&x<<endl;
    cout<<endl;
    cout<<"Isi variable ptrX = "<<ptrX<<" sama dengan alamat x ("<<&x<<")"<<endl;
    cout<<"Isi variable ptrY = "<<ptrY<<" sama dengan alamat x ("<<&x<<")"<<endl;
    cout<<endl;
    cout<<"Nilai yang ditunjuk ptrX = "<<*ptrX<<" sama dengan nilai x ("<<x<<")"<<endl;
    cout<<"Nilai yang ditunjuk ptrY = "<<*ptrY<<" sama dengan nilai x ("<<x<<")"<<endl;

    cout<<endl;
    system("pause");
    return 0;
}