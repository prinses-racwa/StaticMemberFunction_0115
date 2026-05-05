#include <iostream>
using namespace std;

class Buku {
    string judul;

    public:
        Buku setJudul(string judul) {
            this->judul = judul;
            return *this; // chain function
        }

        string getJudul() {
            return this->judul;
        }
};