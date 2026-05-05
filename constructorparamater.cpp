#include <iostream>
using namespace std;

class Mahasiswa {
    public:
        Mahasiswa(int nim, string nama); // constructor dengan parameter
};

Mahasiswa::Mahasiswa(int nim, string nama) {
    cout << "Constructor Dengan Parameter Terpanggil" <<  endl;
    cout << "NIM    : " << nim << endl;
    cout << "Nama   : " << nama << endl;
}