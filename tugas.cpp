#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (Default)
    Kendaraan() {
        id = 0;
        nama = "Tidak Diketahui";
    }

    // 2. Constructor dengan parameter ID saja
    Kendaraan(int inputId) {
        id = inputId;
        nama = "Tanpa Nama";
    }

    // 3. Constructor dengan parameter Nama saja
    Kendaraan(string inputNama) {
        id = 0;
        nama = inputNama;
    }

    // 4. Constructor dengan parameter lengkap (ID dan Nama)
    Kendaraan(int inputId, string inputNama) {
        id = inputId;
        nama = inputNama;
    }

    // Metode untuk menampilkan informasi kendaraan
    void tampilkanInfo() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "-----------------------------" << endl;
    }
};