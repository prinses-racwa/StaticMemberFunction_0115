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

int main() {
    cout << "=== Data Inisialisasi Kendaraan ===" << endl << endl;

    // Membuat objek dengan constructor tanpa parameter
    Kendaraan k1;
    cout << "Objek 1 (Default):" << endl;
    k1.tampilkanInfo();

    // Membuat objek dengan constructor ID saja
    Kendaraan k2(101);
    cout << "Objek 2 (Hanya ID):" << endl;
    k2.tampilkanInfo();

    // Membuat objek dengan constructor Nama saja
    Kendaraan k3("Yamaha RX-King");
    cout << "Objek 3 (Hanya Nama):" << endl;
    k3.tampilkanInfo();

    // Membuat objek dengan constructor lengkap
    Kendaraan k4(202, "Tesla Model S");
    cout << "Objek 4 (Lengkap):" << endl;
    k4.tampilkanInfo();

    return 0;
}