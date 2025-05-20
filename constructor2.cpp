#include <iostream>
#include <string>
using namespace std;

class barang{
    public :
        int kodebarang;
        string namabarang;

        barang(int k, string n);
        void tampilkan();
};



barang::barang(int k, string n){
    kodebarang = k;
    namabarang = n;
}

void barang::tampilkan(){
    cout << "Kode Barang = " << kodebarang <<  endl;
    cout << "Nama Barang = " << namabarang << endl;
}

int main(){
    barang br(1, "Motor");
    br.tampilkan();
}
