#include <iostream>
using namespace std;

class buku{
    string judul;
    public:
    buku setJudul(string judul){
        this->judul = judul;
        return *this; //chain function
    }
    string getjudul(){
        return this->judul;
    }
};

int main(){
    buku bukunya;
    //chain function calls
    cout << bukunya.setJudul("Matematika").getjudul();
    return 0;
}