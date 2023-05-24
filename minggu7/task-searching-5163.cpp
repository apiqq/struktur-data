#include <iostream>

using namespace std;
string toLowerCase(string data);

int main() {
    string data[100];
    string tmp;
    int n;

    string query;
    cout<<"=============================="<<endl;
    cout<<"     Input data pada array    "<<endl;
    cout<<"=============================="<<endl;
    cout<<"Masukan jumlah data : ";
    cin>>n;
    // input data
    cin.ignore();
    for(int i=0;i<n;i++) {
        cout<<"Input data["<<i<<"] : ";
        getline(cin, data[i]);
    }

    // sorting data
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(data[i] > data[j]) {
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
    cout<<endl;
    cout<<"=============================="<<endl;
    cout<<"Data input setelah disorting :"<<endl;
    cout<<"=============================="<<endl;
    for(int i=0;i<n;i++) {
        cout<<data[i]<<endl;
    }

    // searching data
    cout<<endl;
    cout<<"=============================="<<endl;
    cout<<"    Search data pada array    "<<endl;
    cout<<"=============================="<<endl;
    cout<<"Masukan nama yang dicari : ";
    getline(cin, query);

    int front = 0, back = n-1, mid;
    bool isSeekOut;
    while(front <= back) {
        mid = (front+back)/2;

        if(toLowerCase(query) == toLowerCase(data[mid])) {
            isSeekOut = true;
            break;
        } else if(toLowerCase(query) < toLowerCase(data[mid])) {
            back = mid - 1;
        } else {
            front = mid + 1;
        }
    }
    // menampilkan hasil pencarian
    if(isSeekOut) {
        cout<<"Data ditemukan pada index ke-"<<mid<<endl;
        cout<<"Data : "<<data[mid]<<endl;
    } else {
        cout<<"Data tidak ditemukan!"<<endl;
    }

}

string toLowerCase(string data) {
    for(int i=0;i<data.length();i++) {
        data[i] = tolower(data[i]);
    }
    return data;
}