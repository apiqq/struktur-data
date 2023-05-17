#include <iostream>
using namespace std;

int main() {
    int x = 100, y = 130, z;
    int *ptrX, *ptrY;

    cout<<"Nilai x = "<<x<<", y = "<<y<<endl;
    cout<<endl;
    cout<<"Alamat x = "<<&x<<", y = "<<&y<<endl;
    ptrX = &x;
    cout<<"Isi ptrX = "<<ptrX<<" (alamat x), nilai yang ditunjuk ptrX = "<<*ptrX<<endl;
    ptrY = &y;
    cout<<"Isi ptrY = "<<ptrY<<" (alamat x), nilai yang ditunjuk ptrY = "<<*ptrY<<endl;
    cout<<endl;
    z = *ptrX;
    cout<<"Nilai z = "<<z<<" sama dengan nilai x ("<<x<<")"<<endl;
    cout<<endl;
    *ptrY = 70;
    cout<<"Isi ptrY = "<<ptrY<<" (tetap), nilai y = "<<y<<" (yang berubah)"<<endl;
    *ptrX = *ptrY + 5;
    cout<<"Isi ptrX = "<<ptrX<<" (tetap), nilai y = "<<x<<" (yang berubah)"<<endl;
    ptrX = ptrY;
    cout<<"Isi ptrX = "<<ptrX<<" dan ptrY = "<<ptrY<<endl;
    cout<<"Nilai yang ditunjuk ptrX = "<<*ptrX<<" dan ptrY = "<<*ptrY<<endl;

    cout<<endl;
    system("pause");
    return 0;
}
