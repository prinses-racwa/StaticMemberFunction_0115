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

int main(){
    cout << "--daftar inventaeis toko-- "<< endl;
    produk produk1;
    produk produk2 (3);
    produk produk3 ("meja");
    produk produk4 (4, "kursi");

    produk1.tampilkan();
    produk2.tampilkan();
    produk3.tampilkan();
    produk4.tampilkan(); 

    return 0;
}