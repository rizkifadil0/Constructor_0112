#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
        string setget(string jdl)
        {
            //nilai parameter 'judul' untuk memebar variabel 'judul'
            this->judul = jdl;
            //return variable judul
            return this->judul;
        }
};