#include <string>
#include <iostream>
using namespace std;

class produk {
private:
    int id;
    string nama;

public:

    void tampilkan() {
        cout << "id: " << id << endl;
        cout << "Nama: " << nama << endl;
        cout << endl;
    }

    produk() {
        id = 14;
        nama = "tali";
    }

    produk (int pid){
        id=pid;
        nama="meja";
    }

    produk (string pnama){
        id = 1;
        nama=pnama;
    }

    produk (int pid, string pnama) {
        id=pid;
        nama=pnama;
    }
};